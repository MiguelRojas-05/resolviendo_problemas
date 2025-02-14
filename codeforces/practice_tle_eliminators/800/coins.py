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
    (a, k) = list_input()
    if a % 2 == 0: 
        print("YES")
        return
    elif (a-k) % 2 == 0:
        print("YES")
        return
    elif (a % k)%2 == 0:
        print("YES")
        return
    else: print("NO")
def main():
    t = int_input()
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
