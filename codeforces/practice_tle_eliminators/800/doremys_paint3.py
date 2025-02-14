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
    n = int_input()
    a = list_input()
    d = collections.defaultdict(int)
    for e in a:
        d[e] += 1
    if(len(d) > 2):
        print("No")
        return
    lis = list(d.values())
    lis.sort()
    if len(lis) == 1 or (lis[1] - lis[0] <= 1):
        print("Yes")
    else:
        print("No")

def main():
    t = int_input()
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
