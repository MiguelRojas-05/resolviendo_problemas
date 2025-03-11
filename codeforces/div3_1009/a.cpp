#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef pair<ll, ll> pll;

const ll MOD = 1e9+7;
const ll INF = 1e18;

ll dist(pll a, pll b) {
    return (a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second);
}

void solve() {
    ll l, r, d, u;
    cin >> l >> r >> d >> u;
    
    pll L = {-l, 0}; pll R = {r, 0}; pll D = {0, -d}; pll U = {0, u};
    
    ll d1 = dist(L, R);
    ll d2 = dist(D, U);
    ll d3 = dist(L, D);
    ll d4 = dist(L, U);
    ll d5 = dist(R, D);
    ll d6 = dist(R, U);
    
    if (d1 == d2 && d3 == d4 && d4 == d5 && d5 == d6) cout << "Yes\n";
    else cout << "No\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}