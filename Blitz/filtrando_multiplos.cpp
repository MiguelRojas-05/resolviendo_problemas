#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)    
    {
        int pvt;
        cin >> pvt;
        v.push_back(pvt);
    }
    int k;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        if(v[i]%k==0){
            cout<<v[i]<<" ";
        }else{
            cout<<"X"<<" ";
        }
    }
    cout<<endl;
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