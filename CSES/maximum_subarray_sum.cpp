#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef vector<ll> vll;
const ll INF = -1e18;
void solve() {
    int n ; cin >> n;
    vll a (n);
    for(ll& i : a) cin >> i;
    ll cont = 0;
    ll sum = INF;
    for(ll e : a){
        if(cont + e < 0){
            cont += e;
            sum = max(cont, sum);
            cont = 0;
        }
        else{
            cont+=e;
            sum = max(sum, cont);
        }
    }
    cout << sum ;
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
