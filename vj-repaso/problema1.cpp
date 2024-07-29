#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
int n; cin>>n;
string s="";
while (n--)
{
    for (int i = 0; i < 64; i++)
    {
        char x;cin>>x;
        if (x == '.')
        {
            continue;
        }
        else{
            s+=x;
        }
    }
    cout<<s<<endl;
    s="";
    
}

    return 0;
}