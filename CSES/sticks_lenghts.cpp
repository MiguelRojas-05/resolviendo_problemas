#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef vector<ll> vll;

void solve() {
    ll n; cin >> n;
    vll a(n);
    for(ll& e : a) cin >> e;
    sort(a.begin(), a.end());
    ll md = a[a.size()/2];
    ll result = 0;
    for(ll e : a){
        result += (abs(md - e));
    }
    cout << result;
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

