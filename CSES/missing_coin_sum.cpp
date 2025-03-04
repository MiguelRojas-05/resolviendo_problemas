#include <bits/stdc++.h>

using namespace std;
using ll = long long;


void solve() {
    ll n; cin >> n;
    vector <ll> a(n);
    for(ll& i : a) cin >> i;
    sort(a.begin(), a.end());
    ll s = 0;
    for(ll e : a){
        if(e > s + 1){
            cout << s + 1;
            return;
        }else s += e;
    }
    cout << s + 1;
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