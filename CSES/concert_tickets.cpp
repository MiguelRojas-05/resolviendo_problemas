#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef vector<ll> vll;

void solve() {
    ll n, m;  cin >> n >> m;
    multiset<ll> a;
    for(ll i = 0; i < n ; i++){
        ll e; cin >> e;
        a.insert(e);
    }
    vll b(m);
    vll result;
    for(ll& i : b) cin >> i;
    for(ll& x : b){
        auto it = a.lower_bound(x);
        if(it != a.end() && *it == x){
            result.push_back(x);
            a.erase(it);
        }
        else{
            if(it != a.begin()){
                it--;
                result.push_back(*it);
                a.erase(it);
            }else{
                result.push_back(-1);
            }
        }
    }
    for(ll v : result)cout << v <<'\n';
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