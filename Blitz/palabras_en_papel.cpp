#include <bits/stdc++.h>

using namespace std;

void solve(){
    char c;
    string fin="";
    for (int i = 0; i < 64; i++)
    {
        cin>>c;
        if (c != '.')
        {
            fin +=c;
        }        
    }
    cout<<fin<<endl;
    
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