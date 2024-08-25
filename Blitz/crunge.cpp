#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s1, s2;

    getline(cin, s1);

    getline(cin, s2);
    string pvt = "";
    vector<string> vs1;
    vector<string> vs2;
    for (char c : s1)
    {
        if (c == ' ')
        {
            vs1.push_back(pvt);
            pvt = "";
        }
        else
        {
            pvt += c;
        }
    }
    vs1.push_back(pvt);
    pvt = "";
    for (char c : s2)
    {
        if (c == ' ')
        {
            vs2.push_back(pvt);
            pvt = "";
        }
        else
        {
            pvt += c;
        }
    }
    vs2.push_back(pvt);
    vector<string> respuesta;
    for (string e : vs2)
    {
        auto it = find(vs1.begin(), vs1.end(), e);
        if (it != vs1.end())
            respuesta.push_back(e);
    }
    sort(respuesta.begin(), respuesta.end(), [&](string p, string n)
         {
        if(p.length()<n.length())return true;
        else return false; });
    if (!respuesta.empty())
    {
        for (string e : respuesta)
            cout << e << ' ';
        cout << '\n';
    }
    else
    {
        cout << "Ninguno." << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        solve();
    }

    return 0;
}