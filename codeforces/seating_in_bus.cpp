#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    set<int> st;
    vector<int> v(n);

    for (int& x : v)
        cin >> x;
    for (int e : v)
    {
        if (st.empty()) st.insert(e);
        else
        {
            int a = *st.begin();
            int b = *st.rbegin();
            if (e == (a-1) || e == (b+1)) st.insert(e);
            else {
                cout<< "NO\n";
                return;
            }
            
        }
    }
    
    cout<< "YES\n";

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