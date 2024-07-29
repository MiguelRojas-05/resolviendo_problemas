#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
int n; cin>>n;
cin.ignore();
string s;
while(n--)
{
    int count=0;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        switch (tolower(s[i]))
        {
        case 'a':
            count++;
            break;
        case 'e':
            count++;
            break;
        case 'i':
            count++;
            break;
        case 'o':
            count++;
            break;
        case 'u':
            count++;
            break;
        default:
            break;
        }        
    }
    cout<<count<<endl;
}




    return 0;
}

