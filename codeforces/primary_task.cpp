#include <bits/stdc++.h>

using namespace std;


void solve(){
    string n; cin>>n;    
    if(n[0]=='1' && n[1]=='0'){
        if(n[2]>='2')cout<<"YES\n";
        else if(n[2]=='1'){
            if(n[3])cout<<"YES\n";
            else cout<<"NO\n";
        }else{
            cout<<"NO\n";
        }
    }else{
        cout<<"NO\n";
    }
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