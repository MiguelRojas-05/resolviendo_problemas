#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const ll MOD = 1e9+7;
const ll INF = 1e18;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (ll &x : a) cin >> x;
    
    ll B;
    cin >> B;
    
    ll ud = -INF;
    bool posi = true;

    for (int i = 0; i < n; i++) {
        ll cand0 = a[i];
        ll cand1 = B - a[i];

        ll next_val = INF;

        if (cand0 >= ud) next_val = min(next_val, cand0);
        if (cand1 >= ud) next_val = min(next_val, cand1);

        if (next_val == INF) {
            posi = false;
            break;
        }
        ud = next_val;
    }
    
    cout << (posi ? "YES" : "NO") << "\n";
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
