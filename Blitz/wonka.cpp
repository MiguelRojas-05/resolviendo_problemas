#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    string c;
    cin.ignore();
    getline(cin, s);
    cin >> c;

    vector<string> sbs;
    stringstream ss(s);
    string t;
    bool fid = false;

    while (getline(ss, t, '\''))
    {
        if (fid)
        {
            sbs.push_back(t);
        }
        fid = !fid;
    }
    string final;
    for (int i = 0; i < sbs.size(); i++)
    {
        bool d = true;
        for (int j = 0; j < sbs[i].length(); j++)
        {
            size_t p = c.find(sbs[i][j]);
            if (p != string::npos)
            {
                continue;
            }
            else
            {
                d = !d;
                break;
            }
        }
        if (d)
        {
            if (final.empty())
            {
                final += "'";
                final += sbs[i];
                final += "'";
            }
            else
            {
                final += ", '";
                final += sbs[i];
                final += "'";
            }
        }
    }
    cout << "[" << final << "]" << endl;
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
