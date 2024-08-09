#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    cin>>s;
    char ult = tolower(s[0]);
    char prim = toupper(s[1]);

    cout<<prim;

    for (int i = 2; i <s.size(); i++)
    {
        char x = tolower(s[i]);
        cout<<x;
    }
    cout<<ult<<"secret"<<endl;
    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
int t;
cin>>t;
while (t--)
{
    solve();
}

    return 0;
}