#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int c, q;
    cin>>c>>q;
    vector<vector<int>> vv(c);
    for (int i = 0; i < c; i++)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int pvt;
            cin >> pvt;
            vv[i].push_back(pvt);
        }
    }
    for (int i = 0; i < q; i++)
    {
        int psb, ep;
        cin >> psb >> ep;
        cout << vv[psb][ep] << endl;
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