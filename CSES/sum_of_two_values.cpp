#include <bits/stdc++.h>

using namespace std;
using ll = long long;
typedef pair<ll, ll> pll;

void solve() {
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    vector<pll> b(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = {x - a[i], i};
    }

    sort(b.begin(), b.end());


    for (ll i = 0; i < n; i++) {
        ll target = a[i];
        auto it = lower_bound(b.begin(), b.end(), pll(target, 0), [](const pll& p1, const pll& p2) {
            return p1.first < p2.first;
        });

        if (it != b.end() && it->first == target && it->second != i) {
            vector<ll> r = {i, it->second};
            sort(r.begin(), r.end());
            cout << r[0] + 1 << " " << r[1] + 1 << "\n";
            return;
        }
    }

    cout << "IMPOSSIBLE\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}