#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const ll MOD = 1e9+7;
const ll INF = 1e18;

void solve() {
    int n, m; cin >> n >> m;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)cin >> a[i];
    
    vector<ll> b(m);
    for (int j = 0; j < m; j++)cin >> b[j];
    
    sort(b.begin(), b.end());
    
    ll ud = -INF;
    bool posi = true;
    
    for (int i = 0; i < n; i++){
        ll x1 = (a[i] >= ud ? a[i] : INF);
        ll x2 = INF;
        ll rq = ud + a[i];
        auto it = lower_bound(b.begin(), b.end(), rq);
        if(it != b.end())x2 = (*it) - a[i];
        ll next_val = min(x1, x2);
        if(next_val == INF){
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
