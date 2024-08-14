#include <bits/stdc++.h>

using namespace std;


void solve()
{
    vector<int> fibonac(500000);
        for (int i = 0; i < 500000; i++)
        {
            int a = *fibonac.rbegin();
            int b = *(fibonac.end() - 2);
            int pvt = a + b;
            fibonac.push_back(pvt);
        }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin>>n;
        cout<<fibonac[n];
    }

    return 0;
}