#!/usr/bin/env python3

#
# Troglobyte stdlib:
# author: Michael Gene Brockus
# Gmail: <mail: michaelbrockus@gmail.com>
#

# some simple checks on the file format of:
# - python code
# - code samples in tests
# - markdown documentation
#
# checks are:
# - no use of tabs
# - no use of DOS line endings
import os
import re
from pathlib import Path


def check_file(file: Path) -> None:
    lines = file.read_bytes().split(b'\n')
    tabdetector = re.compile(br' *\t')
    for i, line in enumerate(lines):
        if re.match(tabdetector, line):
            raise SystemExit("File {} contains a tab indent on line {:d}. Only spaces are permitted.".format(file, i + 1))
        if line.endswith(b'\r'):
            raise SystemExit("File {} contains DOS line ending on line {:d}. Only unix-style line endings are permitted.".format(file, i + 1))

def check_format() -> None:
    check_suffixes = {'.c',
                      '.cpp',
                      '.cxx',
                      '.cc',
                      '.txt',
                      '.h',
                      '.hpp',
                      '.py',
                      '.build',
                      '.md',
                      }
    skip_dirs = {
        '.pytest_cache',
        'meson-logs', 'meson-private',
        'work area',
        '.eggs', '_cache',              # e.g. .mypy_cache
        'venv',                         # virtualenvs have DOS line endings
    }
    for (root, _, filenames) in os.walk('.'):
        if any([x in root for x in skip_dirs]):
            continue
        for fname in filenames:
            file = Path(fname)
            if file.suffix.lower() in check_suffixes:
                if file.name in ('sitemap.txt', 'meson-test-run.txt'):
                    continue
                check_file(root / file)


if __name__ == '__main__':
    script_dir = os.path.split(__file__)[0]
    if script_dir != '':
        os.chdir(script_dir)
    check_format()
