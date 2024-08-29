#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;
    sort(v.begin(), v.end());
    int p = 1;
    int k = 0;
    for(int e:v){
        if(e>=p){
            k++;
            p++;
        }
        else{
            continue;
        }
    }
    cout<<k<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}