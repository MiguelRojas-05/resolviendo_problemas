import sys
import collections
import itertools
import math
import bisect

def input():
    return sys.stdin.read().strip()

def int_input():
    return int(sys.stdin.readline().strip())

def list_input():
    return list(map(int, sys.stdin.readline().strip().split()))

def solve():
    n,k = list_input()
    a = list_input()
    if k == 1:
        if a == sorted(a):print("YES")
        else: print("NO")
    else:print("YES")

def main():
    t = int_input()
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
