#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    ll n, s, m;
    cin >> n >> s >>m;
    ll k = 0, mayor, menor = 0;
    while (n--)
    {
        cin >> mayor;
        ll pr = mayor - menor;
        // cout<<mayor<<" - "<<menor<<'\n';
        cin >> menor;
        if(pr > k) k = pr;
    }
    ll pr = m - menor;
    // cout<<m<<" - "<<menor<<'\n';
    if(pr > k) k = pr;
    if(k>=s) cout<< "YES \n";
    else cout<<"NO \n";
    // cout<<"------------- \n";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
int t; cin>>t;
while (t--)
{
    solve();
}

    return 0;
}