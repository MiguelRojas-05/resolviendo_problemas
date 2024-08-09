#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int acumulador = 0;
    vector<int> x;
    vector<int> y;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        x.push_back(p);
    }
    for (int i = 0; i < n; i++)
    {
        int g;
        cin >> g;
        y.push_back(g);
    }

    for (int i = 0; i < n; i++)
    {
        acumulador += (x[i] * y[i]);
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