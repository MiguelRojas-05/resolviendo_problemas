#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef vector<ll> vll;

ll busqueda_por_query(const vll& arr, ll t) {
    auto it = upper_bound(arr.begin(), arr.end(), t);
    return it - arr.begin();
}


void solve() {
    ll n; cin >> n;
    vll a(n); for(ll& i : a) cin >> i;
    sort(a.begin(), a.end());
    int q; cin >> q;
    while (q--){
        ll iq; cin >> iq;
        cout << busqueda_por_query(a, iq) <<'\n';
    }
    
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