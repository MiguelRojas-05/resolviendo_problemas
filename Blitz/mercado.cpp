#include <bits/stdc++.h>

using namespace std;


void solve(){
    string s;
    map<char,int>mp;
    mp['0'] = 6;
    mp['1'] = 2;
    mp['2'] = 5;
    mp['3'] = 5;
    mp['4'] = 4;
    mp['5'] = 5;
    mp['6'] = 6;
    mp['7'] = 3;
    mp['8'] = 7;
    mp['9'] = 6;
    cin>>s;
    int k = 0;
    for(char& x : s){
        k += mp[x];
    }
    cout<<k<<'\n';
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