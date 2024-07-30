#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cin.ignore();
    string s;
    while (n--)
    {
        vector<int> v;
        getline(cin, s);
        istringstream stream(s);
        int c;

        while (stream >> c)
        {
            v.push_back(c);
        }

        int pos=0;
        for (int i = 1; i < v.size(); i++)
        {            
            if((v[i])>(v[pos]))
            {                
                pos = i;
            }
            else if(v[i]==v[pos] && pos==0)
            {
                pos = i;
            }
        }
        cout<<pos<<endl;
        v.clear();
        pos = 0;
    }

    return 0;
}
