#include <bits/stdc++.h>

using namespace std;
using ll = long long;
void solve(){
    ll x,y,z;
    cin>>x>>y>>z;
    set<ll> s;
    s.insert(x);
    s.insert(y);
    s.insert(z);
    cout<<*s.begin()<<' '<<*s.rbegin()<<'\n';
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