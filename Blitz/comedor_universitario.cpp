#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    vector<pair<char, int>> lis;
    string apoyo = "";

    for (int i = 0; i < s.length(); i++)
    {

        apoyo += s[i];
        if (isalpha(s[i]))
        {

            int n = stoi(apoyo);
            lis.push_back(make_pair(s[i], n));
            apoyo = "";
        }
    }

    for (const auto &p : lis)
    {
        if (p.second >= 50)
        {
            int div = p.second / 50;
            int rest = p.second % 50;
            for (int i = 0; i < div; i++)
            {
                cout << '[' << p.first << ']';
            }
            if (rest >= 10)
            {
                int d2 = rest / 10;
                int r2 = rest % 10;
                for (int i = 0; i < d2; i++)
                {
                    cout << '{' << p.first << '}';
                }
                if (r2 > 0)
                {
                    cout << '(';
                    for (int i = 0; i < r2; i++)
                    {
                        cout << p.first;
                    }
                    cout << ')';
                }
            }
            else
            {
                cout << '(';
                for (int i = 0; i < rest; i++)
                {
                    cout << p.first;
                }
                cout << ')';
            }
        }
        else if (p.second >= 10 && p.second < 50)
        {
            int d2 = p.second / 10;
            int r2 = p.second % 10;
            for (int i = 0; i < d2; i++)
            {
                cout << '{' << p.first << '}';
            }
            if (r2 > 0)
            {
                cout << '(';
                for (int i = 0; i < r2; i++)
                {
                    cout << p.first;
                }
                cout << ')';
            }
        }
        else
        {
            cout << '(';
            for (int i = 0; i < p.second; i++)
            {
                cout << p.first;
            }
            cout << ')';
        }
    }
    cout << endl;
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
