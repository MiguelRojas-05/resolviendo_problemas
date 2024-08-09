#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    set<char> s;
    for (int i = 0; i < n; i++)
    {
        char pvt;
        cin>>pvt;
        s.insert(pvt);
    }
    
    int crm_dif_total = s.size();
    int max = n / 2;
    int solu;
    crm_dif_total > max ? solu = max : solu = crm_dif_total;
    cout<<solu<<endl;
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