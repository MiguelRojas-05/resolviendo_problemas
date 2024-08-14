#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n, q;
    cin >> n >> q;
    vector<long long> v(n);
    
    for (long long i = 0; i < n; i++) {
        cin >> v[i];
    }

    while (q--) {
        long long d;
        cin >> d;
        
        auto it = lower_bound(v.begin(), v.end(), d);
        long long pos;
        
        if (it != v.end() && *it == d) {
            pos = it - v.begin();
            cout << pos << "\n";
        } else {
            cout << "-1\n";
        }
    }

    return 0;
}
