#include <bits/stdc++.h>

using namespace std;
vector<int> fibonac = {0, 1};
void solve()
{
    for (int i = 2; i < 500007; i++)
    {
        long long mod = 1e8+7;
        long long a = *fibonac.rbegin();
        long long b = *(fibonac.end() - 2);
        long long pvt = (a + b)%mod;

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
    // for(auto e: fibonac){
    //     cout<<e<<"\n";
    // }
    // cout<<"-----"<<"\n";
    while (t--)
    {
        long long n;
        cin >> n;
        cout << fibonac[n] << "\n";
    }

    return 0;
}