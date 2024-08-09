#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    char pe = toupper(s[1]);
    cout << pe;
    for (int i = 2; i < s.length(); i++)
    {
        char x = tolower(s[i]);
        cout << x;
    }
    char last = tolower(s[0]);
    cout << last << "secret" << endl;
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