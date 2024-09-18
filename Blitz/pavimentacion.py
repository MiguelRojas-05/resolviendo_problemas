def solve():
    n, m, a = map(int, input().split())
    f = (n + a - 1) // a
    e = (m + a - 1) // a
    resultado = f * e
    print(resultado)

t = int(input())
for _ in range(t):
    solve()
