#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int contador=0;
    int l = s.length();
    string k = "";
    for (int i = 0; i < l; i+=2)
    {
        set<char>ar;
        ar.insert(s[i]);
        ar.insert(s[i+1]);
        if(ar.count('a') && ar.count('b')){
            k+=s[i];
            k+=s[i+1];
            continue;
        }else{
            if(s[i]=='a')k+='b';
            else k+='a';
            k+=s[i+1];
            contador++;
        }
    }
    cout<<contador<<'\n';    
    cout<<k<<'\n';
    
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
solve();
    return 0;
}