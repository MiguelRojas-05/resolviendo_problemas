#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    bool d = true;
    for (int i = 0; i < s.size() / 2; i++)
    {
        char first, second;
        first = s[i];
        second = s[s.size() - (i + 1)];

        if (first == '{' && second != '}')
        {
            cout << "NO"<<endl;
            return;
        }
        else if (first == '[' && second != ']')
        {
            cout << "NO"<<endl;
            return;
        }
        else if (first == '(' && second != ')')
        {
            cout << "NO"<<endl;
            return;
        }
    }
    cout << "SI" << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}