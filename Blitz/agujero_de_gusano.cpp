#include <bits/stdc++.h>

using namespace std;
void solve()
{
    string s;
    cin >> s;
    int prof = 0;
    if (s.length() == 1)
    {
        cout << 0 << endl;
    }
    else
    {

        while (s.length() > 1)
        {
            int cust = 1;
            for (int i = 0; i < s.length(); i++)
            {
                cust *= (s[i] - 48);
            }
            prof++;
            s = to_string(cust);
        }
        cout<<prof<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}