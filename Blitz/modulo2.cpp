#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string n;
    int m;
    cin >> n >> m;

    int acum = 0;
    for (char e : n)
    {
        acum = (acum * 10 + (e - '0')) % m;
    }

    cout << acum << endl;
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