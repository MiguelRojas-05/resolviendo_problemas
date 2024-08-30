#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,o; cin>>n>>o;
    vector<int>v(n);
    for(int& x : v) cin>>x;
    map<int,int>mp;
    for (int i = 0; i < n; i++){
        int k = o - v[i];
        if(mp.count(k)){
            cout<<mp[k]<<" "<<i+1;
            return;
        }else{
            mp[v[i]] = i+1;
        }
    }
        cout<<"IMPOSSIBLE";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
// int t; cin>>t;
// while (t--)
// {
    solve();
// }

    return 0;
}