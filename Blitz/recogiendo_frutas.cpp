#include <bits/stdc++.h>

using namespace std;
void solve()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int pvt;
        cin >> pvt;
        v.push_back(pvt);
    }
    int acumulador = 0;
    for (int i = 1; i < n; i += 2)
    {
        acumulador += v[i];
    }
    cout << acumulador << endl;
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