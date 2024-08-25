#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    vector<int> v;
    string pvt = "";
    for (char e : s)
    {
        if (isdigit(e)) pvt += e;
        else if(e=='+')
        {
            int r = stoi(pvt);
            v.push_back(r);
            pvt="";
        }
    }
        int l = stoi(pvt);
        v.push_back(l);
        sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        if(i==0)cout<<v[i];
        else{
            cout<<'+'<<v[i];
        }
    }
    cout<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}