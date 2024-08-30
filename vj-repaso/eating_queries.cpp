#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, q;
    cin >> n >> q;
    vector<long long> v(n);
    
    for (long long& x : v)
        cin >> x;
    
    sort(v.begin(), v.end(), greater<long long>());
    
    vector<long long> ps;
    long long sum = 0;
    
    for (long long e : v) {
        sum += e;
        ps.push_back(sum);
    }

    while (q--) {
        long long y;
        cin >> y;

        if (y <= *ps.rbegin()) {
            auto it = lower_bound(ps.begin(), ps.end(), y);
            long long r = it - ps.begin();
            cout << r + 1 << '\n';
        } else {
            cout << -1 << '\n';
        }
    }

    v.clear();
    ps.clear();
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
