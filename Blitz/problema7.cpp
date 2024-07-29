#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

int n; cin>>n;
string s;
while (n--)
{
    cin>>s;
    s+=s[0];
    s+="secret";
    s.erase(s.begin());
    for(auto& c : s) {
        if(isupper(c)) {
            c = tolower(c);
        }else
        {
            continue;
        }
    }
    s[0]=toupper(s[0]);
    
    
    cout<<s<<endl;
}

    return 0;
}