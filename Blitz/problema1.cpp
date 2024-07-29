#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string s;

    while (n--)
    {
        string i = "";
        string f = "";
        cin >> s;
        if (s.length() > 10)
        {
            i += s[0];
            f += *(s.end() - 1);
            cout << i << s.length() - 2 << f << endl;
        }
        else
        {
            cout << s << endl;
        }
    }

    return 0;
}