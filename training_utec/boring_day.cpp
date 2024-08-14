#include <bits/stdc++.h>

using namespace std;
void solve()
{
    long long n, l, r;
    cin >> n >> l >> r;
    vector<long long> v(n);
    for (int i=0; i<n; i++)
    {
        long long pvt;
        cin >> v[i];
    }
    /* for(auto e: v){
        cout<<e<<" ";
    } */
    //cout<<"\n";
    int contador = 0;
    long long acum = 0;
    for (long long i = 0; i < n; i++)
    {
        if (acum == 0)
            acum += v[i];

        if (acum >= l && acum <= r)
        {
            contador++;
            acum = 0;
        }
        else if (acum > r)
        {
            acum = 0;
        }
        else if (acum < l)
        {
            if (v[i+1] < l || v[i+1] > r)
                acum += v[i+1];
            else acum = 0;
        }
    }
    cout<<contador<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}