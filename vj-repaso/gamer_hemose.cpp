#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;
    sort(v.begin(), v.end(), [&](int b, int n)
         {
        if(b>n)return true;
        else return false; });
    int a = v[0];
    int b = v[1];
    int contador = 2*(s/(a+b));
    int rst = s%(a+b);
    bool d = true;
    while (rst > 0)
    {
        if (d)
        {
            rst = rst - a;
            d = false;
        }
        else
        {
            rst = rst - b;
            d = true;
        }
        contador++;
    }
    cout << contador << '\n';
    
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