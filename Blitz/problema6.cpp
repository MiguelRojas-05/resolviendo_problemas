#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
int n; cin>>n;
string s;
string r = "";
while (n--)
{
    cin>>s;
    for (int i = 0; i < s.size(); i++)
    {
        switch (s[i])
        {
        case 'a':
        r+='t';
            break;
        case 't':
        r+='a';
        break;
        case 'c':
        r+='g';
        break;
        case 'g':
        r+='c';
        break;
        default:
            break;
        }
    }
   cout<<r<<endl;
   r = "";
}

    return 0;
}