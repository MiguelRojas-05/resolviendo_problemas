#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    ll n, m;
    cin >> n >> m;
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        ll pvt;
        cin >> pvt;
        mp[pvt] += pvt;
    }

    for (auto &k : mp)
        cout << k.first << " " << k.second << '\n';
    cout << "---------" << '\n';
    ll max_sum = 0, sum = 0;
    int c = 0; // cantidad de tipos de flores
    auto it = mp.begin();
    ll b = it->first;
    while (max_sum < m && it != mp.end())
    {
        c++; ll f = it->first,s = it->second;//actual
        if(((f - b) <= 1) && (c <= 2) ){
            if( (sum += s < m))sum += s;
        }else{
            c=0;
            if(sum > max_sum) max_sum = sum;
        }
    }
    cout<<max_sum<<'\n';
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