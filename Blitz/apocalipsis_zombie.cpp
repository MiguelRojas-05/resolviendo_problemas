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
        getline(cin, s);
        set<int> vs;
        string num_str;
        for (char ch : s)
        {
            if (isdigit(ch))
            {
                num_str += ch;
            }
            else if (ch == ' ')
            {
                if (!num_str.empty())
                {
                    vs.insert(stoi(num_str));
                    num_str.clear();
                }
            }
        }
        if (!num_str.empty())
        {
            vs.insert(stoi(num_str));
        }
        // for(auto e:vs){
        //     cout<<e<<" ";
        // }
        // cout<<'\n';
        if(vs.size()==1)cout<<0<<'\n';
        else{
            int a = *vs.begin();
            int b = *vs.rbegin();
            int r = (b-a-1)-(vs.size()-2);
            cout<<r<<'\n';
        }
    }

    return 0;
}
