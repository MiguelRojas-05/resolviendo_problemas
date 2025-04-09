#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<ll> vll;
typedef pair<int, int> pii;

const ll MOD = 1e9+7;
const ll INF = 1e18;

void solve() {
    ll n, m; cin >> n >> m;
    vll a(n); for(ll& i : a) cin >> i;
    vll prefix_inc(n);
    ll cnt = 0;
    for(ll i = 1; i < n; i++) if(a[i-1] > a[i]) prefix_inc[i] = prefix_inc[i-1] + a[i-1] - a[i];else prefix_inc[i] = prefix_inc[i-1];
    vll prefix_dec(n);
    for(ll i = n-2; i >= 0; i--) if(a[i+1] > a[i])prefix_dec[i] = prefix_dec[i+1] + a[i+1] - a[i];else prefix_dec[i] = prefix_dec[i+1];
    while (m--){
        ll s, t; cin >> s >> t;
        if(s < t)cout << abs(prefix_inc[s-1] - prefix_inc[t-1])<<'\n';
        else cout << abs(prefix_dec[s-1] - prefix_dec[t-1])<<'\n';
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