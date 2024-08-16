#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
char anterior = 'K';
ll acum = 0;
ll sm;
map<char, int> mp;
vector<ll> v;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    mp['A'] = a;
    mp['B'] = b;
    mp['C'] = c;
    // for(auto r : mp){
    //     cout<<r.first<<" "<<r.second<<" ";
    // }
    // cout<<"\n";
    for (auto e : mp)
    {
        if (e.first != anterior)
            v.push_back(e.second);
    }
    sm = *max_element(v.begin(), v.end());
    // cout<<sm<<"<-"<<"\n";
    for (auto e : mp)
        if (e.second == sm && e.second != mp[anterior])
            anterior = e.first;
    acum += sm;
    //  cout<<sm<<"\n";
    // cout << anterior << " <- "<<"\n";
    mp.clear();
    v.clear();
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
    cout << acum;

    return 0;
}