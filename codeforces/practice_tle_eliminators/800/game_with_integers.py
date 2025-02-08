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
    p = n-1
    s = n+1
    if(p%3==0 or s%3==0):print("First")
    else:print("Second")

def main():
    t = int_input()  # Cambiar a `int_input()` si hay múltiples casos de prueba
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
