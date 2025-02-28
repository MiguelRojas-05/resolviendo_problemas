#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef pair<ll, ll> pll;

void solve() {
    int n;  cin >> n;
    vector<pll> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), [&](const pll& l, const pll& r){
        if(l.second != r.second){
            return l.second < r.second;
        }else{
            return l.first < r.first;
        }
    });
    // for(pll& e : a) cout << e.first <<' '<< e.second << '\n';
    ll cont = 1;
    // ll f = a[0].first, s = a[0].second;
    ll rf = a[0].second;
    for(ll i = 1; i < n; i++){
        if(a[i].first >= rf){
            cont++;
            rf = a[i].second;
        }
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