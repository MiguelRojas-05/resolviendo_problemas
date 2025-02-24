#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
    ll n, m, k, cont = 0; cin >> n >> m >> k;
    vector<ll> a(n); for(ll& i : a) cin >> i; sort(a.begin(), a.end());
    vector<ll> b(m); for(ll& i : b) cin >> i; sort(b.begin(), b.end());
    ll i = 0, j = 0;
    
    while (i < n && j < m) {
        if (abs(a[i] - b[j]) <= k) {
            cont++;
            i++; j++;
        } 
        else if (a[i] < b[j]) i++;
        else j++;
    }
    
    cout << cont;
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
