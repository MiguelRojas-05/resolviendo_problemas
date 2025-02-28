#include <bits/stdc++.h>

using namespace std;


void solve(){
    int n; cin>>n;
    vector<string>v(n);
    for(string& x : v) cin>>x;
    stack<int>stc;
    for( string& e : v){
        auto it = find(e.begin(), e.end(), '#');
        stc.push(it-e.begin()+1);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<stc.top()<<' ';
        stc.pop();
    }
    cout<<'\n';
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