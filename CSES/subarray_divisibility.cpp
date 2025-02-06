#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    unordered_map<ll, ll> fre;
    fre[0] = 1;
    ll p = 0;
    ll r = 0;
    for (ll i = 0; i < n; i++) {
        p += a[i];
        ll m = (p % n + n)% n;
        r += fre[m];
        fre[m]++;
    }
    cout << r << '\n';
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