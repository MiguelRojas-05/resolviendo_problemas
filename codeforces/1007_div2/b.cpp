#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef vector<ll> vi;

bool comprobando(ll x) {
    if (x < 0) return false;
    ll raiz = sqrt(x);
    return (raiz * raiz == x);
}
void solve() {
    ll n; cin >> n;
    ll t = (n*(n+1))/2;
    if(comprobando(t)){
        cout << -1<<'\n';
        return;
    }
    vi a;
    for(ll i = 1; i <= n; i++) a.push_back(i);
    ll cont = 0;
    for(ll i = 0; i < n; i++){
        cont += a[i];
        if(comprobando(cont)){
            swap(a[i], a[i+1]);
            cont = cont - a[i+1] + a[i];
        }
    }
    for(ll e : a) cout << e <<' ';
    cout <<'\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}