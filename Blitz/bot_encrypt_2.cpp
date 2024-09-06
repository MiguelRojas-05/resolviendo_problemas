#include <bits/stdc++.h>

using namespace std;


bool check(string s){
    int k = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='(' || s[i]==')') k++;
    }
    if(k >= 2)return true;
    else return false;
}

string chamba(string g){
    stack<char>st;
    int a,b;
    bool ds = true;
    for (int i = 0; i < g.length(); i++)
    {
        if(g[i]=='(' && ds){
            a = i;
        }else if(g[i] ==')' && ds){
            b = i;
            ds = false;
        }
    }
    for (int i = a+1; i < b; i++)
    {
        st.push(g[i]);
    }
    string fut="";
    while (!st.empty())
    {
        fut += st.top();
        st.pop();
    }
    g.replace(a,b-a+1,fut);
    return g;
    
}
string definitivo(string r){
    if(!check(r))return r;
    else return definitivo(chamba(r));
}
void solve(){
    string p;
    getline(cin,p);
    string prime;
    prime = definitivo(p);
    cout<<prime<<'\n';
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    cin.ignore();
    while (t--)
    {
        solve();
    }
    
    return 0;
}