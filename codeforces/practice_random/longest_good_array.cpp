#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll d = b - a;
    ll n = 0;
    while (n * (n + 1) / 2 <= d)
    {
        n++;
    }
    cout << n << '\n';
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}