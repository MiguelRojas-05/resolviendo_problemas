#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const ll MOD = 1e9+7;
const ll INF = 1e18;

void solve() {
    ll n, min_days, max_temp; cin >> n >> min_days >> max_temp;
    ll len = 0, ans = 0;
    for(int i = 0; i < n; ++i){
        ll pvt; cin >> pvt;
        if(pvt <= max_temp) len++;
        else{
            if (len >= min_days) ans += ((len - min_days + 1) * (len - min_days + 2)) / 2;
            len = 0;
        }
    }
     if (len >= min_days) ans += ((len - min_days + 1) * (len - min_days + 2)) / 2;
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}