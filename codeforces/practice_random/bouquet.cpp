#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
    ll n, m;
    cin >> n >> m;
    map<ll, ll> mp;

    for (ll i = 0; i < n; i++) {
        ll pvt;
        cin >> pvt;
        mp[pvt] += pvt;
    }

    ll max_sum = 0, sum = 0;
    auto after = mp.begin();
    auto before = mp.begin();

    while (after != mp.end()) {
        if ((after->first - before->first) == 0) { 
            sum += after->second;
            advance(after, 1);
        } 
        else if ((after->first - before->first) == 1) { 
            sum += after->second;
            max_sum = max(max_sum, sum);
            advance(after, 1);
        } 
        else { 
            max_sum = max(max_sum, sum);
            sum -= before->second;
            advance(before, 1);
        }
    }

    max_sum = max(max_sum, sum);
    
    cout << min(max_sum, m) << '\n';
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
