#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> fibo = {0, 1};
    for (int i = 0; i < n - 2; i++)
    {
        int a = *fibo.rbegin();
        int b = *(fibo.end() - 2);
        int pvt = a + b;
        fibo.push_back(pvt);
    }
    cout << "[";
    for (int i=0; i<fibo.size(); i++)
    {
        if (i == fibo.size()-1)
        {
            cout << fibo[i] + 5;
        }
        else
        {
            cout << fibo[i] + 5 << ", ";
        }
    }
    cout << "]";
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