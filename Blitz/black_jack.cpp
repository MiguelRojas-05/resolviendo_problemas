#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n;
    cin >> n;
    int pvt = n - 10;
    if (pvt <= 0 || pvt > 11)
    {
        cout << 0 << endl;
    }
    else if (pvt == 10)
    {
        cout << 15 << endl;
    }
    else
    {
        cout << 4 << endl;
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