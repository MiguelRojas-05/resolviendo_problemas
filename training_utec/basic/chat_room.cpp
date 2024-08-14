#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int d = 0;
    cin >> s;
    vector<char> saludo = {'o', 'l', 'l', 'e', 'h'};
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == saludo.back())
        {
            saludo.pop_back();
            d++;
        }
    }
    if (d == 5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}