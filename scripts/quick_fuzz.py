#!/usr/bin/env python3
"""Quick fuzzy test for tree-sitter-beancount."""

import subprocess
import random
import string
import os
import tempfile
import sys
from datetime import datetime, timedelta

ACCOUNT_TYPES = ["Assets", "Liabilities", "Equity", "Income", "Expenses"]
ACCOUNT_COMPONENTS = ["Bank", "Checking", "Savings", "Cash", "Card", "Investments"]
CURRENCIES = ["USD", "CAD", "EUR", "GBP", "JPY", "AAPL", "GOOG", "MSFT"]


def random_date():
    return (datetime(2000, 1, 1) + timedelta(days=random.randint(0, 10000))).strftime(
        "%Y-%m-%d"
    )


def random_account():
    return f"{random.choice(ACCOUNT_TYPES)}:{random.choice(ACCOUNT_COMPONENTS)}{random.randint(1, 10)}"


def random_number():
    return f"{random.randint(0, 10000)}.{random.randint(0, 999999):06d}"


def random_string(length=10):
    return "".join(random.choices(string.ascii_letters + string.digits, k=length))


def random_currency():
    return random.choice(CURRENCIES)


def random_tag():
    return f"#{random_string(10)}"


def random_link():
    return f"^{random_string(10)}"


def generate_header():
    return "\n".join(
        [
            f"{random_date()} open {random.choice(ACCOUNT_TYPES)}:Test{i}"
            for i in range(1, 5)
        ]
    )


def generate_transaction():
    date = random_date()
    flag = random.choice(["*", "!"])
    items = []
    if random.random() < 0.5:
        items.append(random_tag())
    if random.random() < 0.3:
        items.append(random_link())
    tags = " " + " ".join(items) if items else ""

    postings = []
    for _ in range(2):
        account = random_account()
        currency = random_currency()
        cost = "" if random.random() < 0.5 else f" {{{random_number()} {currency}}}"
        price = (
            "" if random.random() < 0.7 else f" @ {random_number()} {random_currency()}"
        )
        postings.append(f"    {account} {random_number()} {currency}{cost}{price}")

    return f'{date} {flag} "{random_string(15)}"{tags}\n' + "\n".join(postings)


def run_parse(content):
    with tempfile.NamedTemporaryFile(mode="w", suffix=".beancount", delete=False) as f:
        f.write(content)
        f.flush()
        path = f.name
    try:
        r = subprocess.run(
            ["npx", "tree-sitter", "parse", path],
            capture_output=True,
            text=True,
            timeout=10,
        )
        return r.returncode == 0
    finally:
        os.unlink(path)


def run_check(content):
    with tempfile.NamedTemporaryFile(mode="w", suffix=".beancount", delete=False) as f:
        f.write(content)
        f.flush()
        path = f.name
    try:
        r = subprocess.run(
            ["bean-check", path], capture_output=True, text=True, timeout=10
        )
        return r.returncode == 0
    finally:
        os.unlink(path)


def main():
    print("Quick Fuzzy Test (30 iterations)...")
    both, mismatch, bc_fail = 0, 0, 0

    for i in range(30):
        content = generate_header() + "\n" + generate_transaction()
        ts_ok = run_parse(content)
        bc_ok = run_check(content)

        if ts_ok and bc_ok:
            both += 1
        elif not ts_ok and bc_ok:
            mismatch += 1
            print(f"[MISMATCH] {i + 1}")
        elif ts_ok and not bc_ok:
            bc_fail += 1

    print(f"\nResults: {both} pass, {bc_fail} bc-fail, {mismatch} mismatch")
    print("SUCCESS!" if mismatch == 0 else "FAILED!")


if __name__ == "__main__":
    main()
