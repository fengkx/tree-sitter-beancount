#!/usr/bin/env python3
"""
Comprehensive fuzzy testing script for tree-sitter-beancount parser.
Uses bean-check (official parser) to validate tree-sitter results.
"""

import subprocess
import random
import string
import os
import tempfile
import sys
import re
from datetime import datetime, timedelta
from collections import defaultdict

ACCOUNT_TYPES = ["Assets", "Liabilities", "Equity", "Income", "Expenses"]
ACCOUNT_COMPONENTS = [
    "Bank",
    "Checking",
    "Savings",
    "Cash",
    "CreditCard",
    "Card",
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
    "US",
    "CA",
    "UK",
    "EU",
    "JP",
    "CN",
    "Global",
    "Chase",
    "BoA",
    "Wells",
    "Citi",
    "Vanguard",
    "Fidelity",
]
CURRENCIES = [
    "USD",
    "CAD",
    "EUR",
    "GBP",
    "JPY",
    "CNY",
    "AUD",
    "CHF",
    "AAPL",
    "GOOG",
    "MSFT",
    "AMZN",
    "TSLA",
    "META",
    "BTC",
    "ETH",
    "SOL",
    "HOOL",
    "VTI",
    "SPY",
]


def random_date():
    start = datetime(2000, 1, 1)
    end = datetime(2035, 12, 31)
    delta = end - start
    return (start + timedelta(days=random.randint(0, delta.days))).strftime("%Y-%m-%d")


def random_account():
    acct_type = random.choice(ACCOUNT_TYPES)
    parts = [acct_type]
    for _ in range(random.randint(1, 3)):
        parts.append(random.choice(ACCOUNT_COMPONENTS))
    return ":".join(parts)


def random_currency():
    return random.choice(CURRENCIES)


def random_number():
    if random.random() < 0.3:
        return str(random.randint(-10000000, 10000000))
    return f"{random.randint(0, 100000)}.{random.randint(0, 999999):06d}"


def random_string(length=10):
    chars = string.ascii_letters + string.digits + " _-.,!?"
    return "".join(random.choice(chars) for _ in range(length))


def random_tag():
    return "#" + "".join(
        random.choices(
            string.ascii_letters + string.digits + "-_", k=random.randint(5, 20)
        )
    )


def random_link():
    return "^" + "".join(
        random.choices(
            string.ascii_letters + string.digits + "-_", k=random.randint(5, 20)
        )
    )


def generate_header():
    lines = []
    for acct_type in ACCOUNT_TYPES:
        if random.random() < 0.8:
            lines.append(
                f"{random_date()} open {acct_type}:Test{random.randint(1, 100)}"
            )
    return "\n".join(lines)


def generate_open():
    date = random_date()
    account = random_account()
    currencies = [random_currency() for _ in range(random.randint(0, 3))]
    booking = random.choice(["", "", "", ' "STRICT"'])
    curr_str = " " + ",".join(currencies) if currencies else ""
    return f"{date} open {account}{curr_str}{booking}"


def generate_close():
    return f"{random_date()} close {random_account()}"


def generate_commodity():
    return f"{random_date()} commodity {random_currency()}"


def generate_balance():
    date = random_date()
    account = random_account()
    amount = random_number()
    currency = random_currency()
    tol = f" ~ {random_number()}" if random.random() < 0.3 else ""
    return f"{date} balance {account} {amount} {currency}{tol}"


def generate_note():
    return f'{random_date()} note {random_account()} "{random_string(20)}"'


def generate_document():
    return (
        f'{random_date()} document {random_account()} "/path/{random_string(10)}.pdf"'
    )


def generate_event():
    return f'{random_date()} event "{random_string(10)}" "{random_string(20)}"'


def generate_query():
    return f'{random_date()} query "{random_string(8)}" "SELECT *"'


def generate_price():
    return f"{random_date()} price {random_currency()} {random_number()} {random_currency()}"


def generate_custom():
    date = random_date()
    name = f'"{random_string(8)}"'
    values = []
    for _ in range(random.randint(1, 5)):
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


def generate_cost_spec():
    currency = random_currency()
    rand = random.random()
    if rand < 0.15:
        return " {}"
    elif rand < 0.25:
        return " {*}"
    elif rand < 0.35:
        return f" {{{random_date()}}}"
    elif rand < 0.45:
        return f' {{"{random_string(8)}"}}'
    elif rand < 0.55:
        return f" {{{random_number()} {currency}}}"
    elif rand < 0.65:
        return f" {{{random_number()} {currency}, {random_date()}}}"
    elif rand < 0.75:
        return f' {{{random_number()} {currency}, "{random_string(8)}"}}'
    elif rand < 0.85:
        return (
            f' {{{random_number()} {currency}, {random_date()}, "{random_string(8)}"}}'
        )
    elif rand < 0.92:
        return f" {{# {random_number()} {currency}}}"
    else:
        return f" {{{random_number()} # {random_number()} {currency}}}"


def generate_price_annotation():
    currency = random_currency()
    rand = random.random()
    if rand < 0.6:
        return f" @ {random_number()} {currency}"
    elif rand < 0.9:
        return f" @@ {random_number()} {currency}"
    return ""


def generate_posting():
    account = random_account()
    currency = random_currency()
    amount = random_number()
    cost = generate_cost_spec()
    price = generate_price_annotation()
    flag = random.choice(["", "*", "!"])
    flag_str = f"{flag} " if flag else ""
    return f"    {flag_str}{account} {amount} {currency}{cost}{price}"


def generate_arithmetic():
    ops = ["+", "-", "*", "/"]
    terms = [random_number() for _ in range(random.randint(2, 5))]
    expr = terms[0]
    for term in terms[1:]:
        expr += f" {random.choice(ops)} {term}"
    if random.random() < 0.4:
        expr = f"({expr})"
    if random.random() < 0.2:
        expr = f"-{expr}"
    return expr


def generate_transaction():
    date = random_date()
    flag = random.choice(["*", "!", "txn"])
    payee = f'"{random_string(12)}" ' if random.random() < 0.4 else ""
    narration = f'"{random_string(15)}"' if random.random() < 0.7 else ""

    items = []
    if random.random() < 0.5:
        for _ in range(random.randint(1, 3)):
            items.append(random_tag())
    if random.random() < 0.4:
        for _ in range(random.randint(0, 2)):
            items.append(random_link())
    random.shuffle(items)
    tags_links = " " + " ".join(items) if items else ""

    postings = [generate_posting() for _ in range(random.randint(1, 6))]
    return f"{date} {flag} {payee}{narration}{tags_links}\n" + "\n".join(postings)


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


def run_tree_sitter(content):
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


def run_fuzz_test(iterations=500):
    print(f"Comprehensive Fuzzy Testing ({iterations} iterations)...")
    print("=" * 70)

    generators = [
        ("transaction", generate_transaction, 150),
        (
            "arithmetic",
            lambda: generate_header() + "\n" + generate_arithmetic_transaction(),
            40,
        ),
        ("open", generate_open, 50),
        ("close", generate_close, 30),
        ("commodity", generate_commodity, 20),
        ("balance", generate_balance, 40),
        ("note", generate_note, 20),
        ("event", generate_event, 20),
        ("query", generate_query, 20),
        ("price", generate_price, 40),
        ("custom", generate_custom, 30),
    ]

    coverage = defaultdict(set)
    results = {
        "both_pass": 0,
        "ts_pass_bc_fail": 0,
        "ts_fail_bc_pass": 0,
        "both_fail": 0,
        "errors": [],
    }

    for gen_name, gen_func, count in generators:
        for i in range(count):
            content = gen_func()
            ts_ok, ts_err = run_tree_sitter(content)
            bc_ok, bc_err = run_bean_check(content)

            coverage[gen_name].add("total")

            if ts_ok and bc_ok:
                results["both_pass"] += 1
                coverage[gen_name].add("pass")
            elif ts_ok and not bc_ok:
                results["ts_pass_bc_fail"] += 1
                coverage[gen_name].add("bc_fail")
            elif not ts_ok and bc_ok:
                results["ts_fail_bc_pass"] += 1
                coverage[gen_name].add("mismatch")
                results["errors"].append(
                    {
                        "type": gen_name,
                        "content": content[:200],
                        "ts_error": ts_err[:100],
                    }
                )
            else:
                results["both_fail"] += 1
                coverage[gen_name].add("both_fail")

    print(f"\nResults:")
    print(f"  tree-sitter OK + bean-check OK: {results['both_pass']}")
    print(f"  tree-sitter OK + bean-check FAIL: {results['ts_pass_bc_fail']}")
    print(f"  MISMATCHES (ts FAIL, bc OK): {results['ts_fail_bc_pass']}")
    print(f"  tree-sitter FAIL + bean-check FAIL: {results['both_fail']}")

    print(f"\nCoverage:")
    for gen_name, cov in sorted(coverage.items()):
        status = "✓" if "pass" in cov and "mismatch" not in cov else "✗"
        print(f"  {status} {gen_name}")

    if results["errors"]:
        print(f"\nMismatches ({len(results['errors'])}):")
        for err in results["errors"][:3]:
            print(f"\n  [{err['type']}]")
            print(f"  {err['content'][:80]}...")
            print(f"  Error: {err['ts_error'][:60]}")

    return results["ts_fail_bc_pass"] == 0


if __name__ == "__main__":
    iterations = int(sys.argv[1]) if len(sys.argv) > 1 else 500
    success = run_fuzz_test(iterations)
    sys.exit(0 if success else 1)
