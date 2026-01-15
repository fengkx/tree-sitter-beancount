#!/usr/bin/env python3
"""
Fuzzy testing script for tree-sitter-beancount parser.

This script generates random Beancount entries and tests if the tree-sitter
parser can handle them correctly.
"""

import subprocess
import random
import string
import os
import tempfile
import sys
from datetime import datetime, timedelta

ACCOUNT_TYPES = ["Assets", "Liabilities", "Equity", "Income", "Expenses"]
COMMON_CURRENCIES = ["USD", "CAD", "EUR", "GBP", "JPY", "CNY", "AUD", "CHF"]

# Valid second-level account components (must start with uppercase letter)
ACCOUNT_COMPONENTS = [
    "Bank",
    "Checking",
    "Savings",
    "Cash",
    "CreditCard",
    "Investments",
    "Stocks",
    "Bonds",
    "Funds",
    "Brokerage",
    "Salary",
    "Bonus",
    "Dividend",
    "Interest",
    "Rent",
    "Food",
    "Transport",
    "Shopping",
    "Entertainment",
    "Utilities",
    "Mortgage",
    "Insurance",
    "Travel",
    "Health",
    "Education",
    "Business",
    "US",
    "CA",
    "UK",
    "EU",
    "JP",
    "CN",
    "Chase",
    "BoA",
    "Wells",
    "Citi",
    "Vanguard",
    "Fidelity",
    "Schwab",
]


def random_date():
    """Generate a random date string YYYY-MM-DD."""
    start = datetime(2000, 1, 1)
    end = datetime(2030, 12, 31)
    delta = end - start
    random_days = random.randint(0, delta.days)
    date = start + timedelta(days=random_days)
    return date.strftime("%Y-%m-%d")


def random_account():
    """Generate a random account name (valid Beancount format)."""
    acct_type = random.choice(ACCOUNT_TYPES)
    parts = [acct_type]
    for _ in range(random.randint(1, 2)):
        name = random.choice(ACCOUNT_COMPONENTS)
        parts.append(name)
    return ":".join(parts)


def random_currency():
    """Generate a random currency."""
    return random.choice(COMMON_CURRENCIES)


def random_number():
    """Generate a random number."""
    if random.random() < 0.3:
        return str(random.randint(-1000000, 1000000))
    integer = random.randint(0, 10000)
    decimals = random.randint(0, 999999)
    return f"{integer}.{decimals:06d}"


def random_string(length=10):
    """Generate a random string."""
    chars = string.ascii_letters + string.digits + " _-.,!?"
    return "".join(random.choice(chars) for _ in range(length))


def random_tag():
    """Generate a random tag."""
    return "#" + "".join(
        random.choices(string.ascii_letters + string.digits, k=random.randint(5, 15))
    )


def random_link():
    """Generate a random link."""
    return "^" + "".join(
        random.choices(string.ascii_letters + string.digits, k=random.randint(5, 15))
    )


def generate_open():
    """Generate an open directive."""
    date = random_date()
    account = random_account()
    currencies = [random_currency() for _ in range(random.randint(0, 3))]
    booking = random.choice(["", "", "", ' "STRICT"'])

    curr_str = " " + ",".join(currencies) if currencies else ""
    return f"{date} open {account}{curr_str}{booking}"


def generate_close():
    """Generate a close directive."""
    return f"{random_date()} close {random_account()}"


def generate_commodity():
    """Generate a commodity directive."""
    return f"{random_date()} commodity {random_currency()}"


def generate_balance():
    """Generate a balance directive."""
    date = random_date()
    account = random_account()
    amount = random_number()
    currency = random_currency()
    tol = ""
    if random.random() < 0.2:
        tol = f" ~ {random_number()}"
    return f"{date} balance {account} {amount} {currency}{tol}"


def generate_note():
    """Generate a note directive."""
    return f'{random_date()} note {random_account()} "{random_string(20)}"'


def generate_document():
    """Generate a document directive."""
    return f'{random_date()} document {random_account()} "/path/to/{random_string(10)}.pdf"'


def generate_event():
    """Generate an event directive."""
    return f'{random_date()} event "{random_string(10)}" "{random_string(20)}"'


def generate_query():
    """Generate a query directive."""
    return f'{random_date()} query "{random_string(10)}" "SELECT *"'


def generate_price():
    """Generate a price directive."""
    return f"{random_date()} price {random_currency()} {random_number()} {random_currency()}"


def generate_posting():
    """Generate a single posting."""
    account = random_account()
    currency = random_currency()
    amount = random_number()

    # Cost spec
    if random.random() < 0.3:
        cost_options = [
            f" {{{random_number()} {currency}}}",
            f" {{{random_number()} {currency}, {random_date()}}}",
            f' {{{random_number()} {currency}, "{random_string(8)}"}}',
            f' {{{random_number()} {currency}, {random_date()}, "{random_string(8)}"}}',
            " {*}",
            " {}",
        ]
        cost = random.choice(cost_options)
    else:
        cost = ""

    # Price
    if random.random() < 0.2 and not cost:
        price = f" @ {random_number()} {currency}"
    elif random.random() < 0.1:
        price = f" @@ {random_number()} {currency}"
    else:
        price = ""

    flag = random.choice(["", "*", "!"])
    flag_str = f"{flag} " if flag else ""

    return f"    {flag_str}{account} {amount} {currency}{cost}{price}"


def generate_transaction():
    """Generate a transaction."""
    date = random_date()
    flag = random.choice(["*", "!", "txn"])

    has_payee = random.random() < 0.3
    payee = f'"{random_string(12)}" ' if has_payee else ""
    narration = f'"{random_string(15)}"' if random.random() < 0.7 else ""

    tags_links = ""
    if random.random() < 0.4:
        items = []
        for _ in range(random.randint(1, 3)):
            items.append(random_tag())
        for _ in range(random.randint(0, 2)):
            items.append(random_link())
        random.shuffle(items)
        tags_links = " " + " ".join(items)

    num_postings = random.randint(1, 5)
    postings = [generate_posting() for _ in range(num_postings)]

    header = f"{date} {flag} {payee}{narration}{tags_links}"
    return header + "\n" + "\n".join(postings)


def generate_custom():
    """Generate a custom directive."""
    date = random_date()
    name = f'"{random_string(8)}"'
    values = []
    for _ in range(random.randint(1, 4)):
        val_type = random.choice(["str", "date", "bool", "num", "amount"])
        if val_type == "str":
            values.append(f'"{random_string(8)}"')
        elif val_type == "date":
            values.append(random_date())
        elif val_type == "bool":
            values.append(random.choice(["TRUE", "FALSE"]))
        elif val_type == "num":
            values.append(random_number())
        else:
            values.append(f"{random_number()} {random_currency()}")
    return f"{date} custom {name} {' '.join(values)}"


def generate_arithmetic():
    """Generate arithmetic expression."""
    ops = ["+", "-", "*", "/"]
    terms = [random_number() for _ in range(random.randint(2, 4))]

    expr = terms[0]
    for term in terms[1:]:
        expr += f" {random.choice(ops)} {term}"

    if random.random() < 0.3:
        expr = f"({expr})"

    return expr


def generate_arithmetic_transaction():
    """Generate transaction with arithmetic amounts."""
    date = random_date()
    flag = random.choice(["*", "!"])
    narration = f'"{random_string(12)}"'

    postings = []
    for _ in range(random.randint(2, 4)):
        account = random_account()
        currency = random_currency()
        amount = generate_arithmetic()
        postings.append(f"    {account} {amount} {currency}")

    return f"{date} {flag} {narration}\n" + "\n".join(postings)


def generate_header():
    """Generate header with account type openings (all must be nested)."""
    lines = []
    for atype in ACCOUNT_TYPES:
        if random.random() < 0.7:
            account = f"{atype}:Test{random.randint(1, 100)}"
            lines.append(f"{random_date()} open {account}")
    return "\n".join(lines)


def run_tree_sitter(content):
    """Run tree-sitter parse on content."""
    with tempfile.NamedTemporaryFile(mode="w", suffix=".beancount", delete=False) as f:
        f.write(content)
        f.flush()
        path = f.name

    try:
        result = subprocess.run(
            ["npx", "tree-sitter", "parse", path],
            capture_output=True,
            text=True,
            timeout=30,
        )
        return result.returncode == 0, result.stderr
    finally:
        os.unlink(path)


def run_bean_check(content):
    """Run bean-check on content."""
    with tempfile.NamedTemporaryFile(mode="w", suffix=".beancount", delete=False) as f:
        f.write(content)
        f.flush()
        path = f.name

    try:
        result = subprocess.run(
            ["bean-check", path], capture_output=True, text=True, timeout=30
        )
        return result.returncode == 0, result.stderr
    except subprocess.TimeoutExpired:
        return False, "Timeout"
    finally:
        os.unlink(path)


def run_test(num_iterations=200):
    """Run fuzzy tests."""
    print(f"Fuzzy Testing ({num_iterations} iterations)...")
    print("=" * 60)

    ts_pass = 0
    ts_fail = 0
    bc_fail = 0
    mismatches = 0

    generators = [
        ("transaction", generate_transaction, 40),
        ("arithmetic", generate_arithmetic_transaction, 20),
        ("open", generate_open, 15),
        ("balance", generate_balance, 15),
        ("price", generate_price, 10),
        ("note", generate_note, 10),
        ("event", generate_event, 5),
        ("query", generate_query, 5),
        ("custom", generate_custom, 5),
    ]

    for gen_name, gen_func, count in generators:
        for i in range(count):
            content = generate_header() + "\n" + gen_func()

            ts_ok, ts_err = run_tree_sitter(content)
            bc_ok, bc_err = run_bean_check(content)

            if ts_ok and bc_ok:
                ts_pass += 1
            elif ts_ok and not bc_ok:
                bc_fail += 1
            elif not ts_ok and bc_ok:
                mismatches += 1
                print(f"\n[MISMATCH] {gen_name} #{i + 1}")
                print(content[:200])
                print(f"TS err: {ts_err[:150]}")
            else:
                ts_fail += 1

    print("\n" + "=" * 60)
    print(f"Results:")
    print(f"  tree-sitter OK, bean-check OK: {ts_pass}")
    print(f"  tree-sitter OK, bean-check FAIL: {bc_fail}")
    print(f"  tree-sitter FAIL, bean-check OK (MISMATCHES): {mismatches}")
    print(f"  tree-sitter FAIL, bean-check FAIL: {ts_fail}")
    print(f"  Total: {ts_pass + bc_fail + mismatches + ts_fail}")

    return mismatches == 0


def test_edge_cases():
    """Test specific edge cases."""
    print("\n" + "=" * 60)
    print("Edge Case Tests:")

    edge_cases = [
        (
            "empty_cost",
            """2024-01-01 open Assets:Test
2024-01-01 open Liabilities:Test
2024-01-02 * "Test"
    Assets:Test 10 HOOL {}
    Liabilities:Test -100 USD
""",
        ),
        (
            "merge_cost",
            """2024-01-01 open Assets:Test
2024-01-01 open Liabilities:Test
2024-01-02 * "Test"
    Assets:Test 10 HOOL {*}
    Liabilities:Test -100 USD
""",
        ),
        (
            "date_cost",
            """2024-01-01 open Assets:Test
2024-01-01 open Liabilities:Test
2024-01-02 * "Test"
    Assets:Test 10 HOOL {2024-01-01}
    Liabilities:Test -100 USD
""",
        ),
        (
            "label_cost",
            """2024-01-01 open Assets:Test
2024-01-01 open Liabilities:Test
2024-01-02 * "Test"
    Assets:Test 10 HOOL {"lot-123"}
    Liabilities:Test -100 USD
""",
        ),
        (
            "triple_cost",
            """2024-01-01 open Assets:Test
2024-01-01 open Liabilities:Test
2024-01-02 * "Test"
    Assets:Test 10 HOOL {100 USD, 2024-01-01, "lot-123"}
    Liabilities:Test -1000 USD
""",
        ),
        (
            "atat_price",
            """2024-01-01 open Assets:Test
2024-01-01 open Liabilities:Test
2024-01-02 * "Test"
    Assets:Test 10 HOOL {100 USD} @@ 1000 USD
    Liabilities:Test -1000 USD
""",
        ),
        (
            "zero_amount",
            """2024-01-01 open Assets:Test
2024-01-01 open Liabilities:Test
2024-01-02 * "Test"
    Assets:Test 0 USD
    Liabilities:Test 0 USD
""",
        ),
        (
            "many_postings",
            """2024-01-01 open Assets:Test
2024-01-01 open Assets:Test2
2024-01-01 open Liabilities:Test
2024-01-01 open Income:Test
2024-01-01 open Expenses:Test
2024-01-02 * "Test"
    Assets:Test 100 USD
    Liabilities:Test -25 USD
    Income:Test -25 USD
    Expenses:Test -25 USD
    Assets:Test2 -25 USD
""",
        ),
        (
            "pushtag",
            """2024-01-01 open Assets:Test
2024-01-01 open Liabilities:Test
pushtag #trip
2024-01-02 * "Test"
    Assets:Test 100 USD
    Liabilities:Test -100 USD
poptag #trip
""",
        ),
        (
            "pushmeta",
            """2024-01-01 open Assets:Test
2024-01-01 open Liabilities:Test
pushmeta loc: "home"
2024-01-02 * "Test"
    Assets:Test 100 USD
    Liabilities:Test -100 USD
popmeta loc:
""",
        ),
        (
            "multiline_str",
            """2024-01-01 open Assets:Test
2024-01-01 open Liabilities:Test
2024-01-02 * "Line 1
    Line 2"
    Assets:Test 100 USD
    Liabilities:Test -100 USD
""",
        ),
        (
            "many_tags",
            """2024-01-01 open Assets:Test
2024-01-01 open Liabilities:Test
2024-01-02 * #tag1 #tag2 #tag3 #tag4
    Assets:Test 100 USD
    Liabilities:Test -100 USD
""",
        ),
    ]

    for name, content in edge_cases:
        ts_ok, ts_err = run_tree_sitter(content)
        bc_ok, bc_err = run_bean_check(content)

        status = "PASS"
        if not ts_ok and bc_ok:
            status = "TS-FAIL"
        elif ts_ok and not bc_ok:
            status = "BC-FAIL"
        elif not ts_ok and not bc_ok:
            status = "BOTH-FAIL"

        print(f"  {name}: {status}")

        if not ts_ok and bc_ok:
            print(f"    TS: {ts_err[:100].strip()}")


if __name__ == "__main__":
    iterations = int(sys.argv[1]) if len(sys.argv) > 1 else 200

    success = run_test(iterations)
    test_edge_cases()

    sys.exit(0 if success else 1)
