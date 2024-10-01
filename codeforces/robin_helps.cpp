#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    ll n,k; cin>>n>>k;
    ll rbn = 0;
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        ll p; cin>>p;
        if(p >= k)rbn+=p;
        if(rbn && (p == 0)){
            rbn--;
            x++;
            continue;
        }
    }
    cout << x <<'\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t; cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}