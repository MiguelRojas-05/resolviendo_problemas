#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>v(n);
    set<int>s;
    for(int& x:v)cin>>x;
    for (int i = n-1; i >= 0; i--)
    {
        if(s.count(v[i])){
            // for(int e:s)cout<<e<<" ";
            // cout<<'\n';
            cout<< n  - s.size()<<'\n';
            return;
        }else{
            s.insert(v[i]);
        }
    }
    cout<<0<<'\n';
    
    
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