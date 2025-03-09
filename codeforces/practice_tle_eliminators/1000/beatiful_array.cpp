#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const ll MOD = 1e9+7;
const ll INF = 1e18;

void solve() {
    ll n, k, b, s;
        cin >> n >> k >> b >> s;
        vector <ll> a(n);
        a[0] = k * b;
        s -= k * b;
        if (s < 0) cout << "-1\n";
        else {
            for (ll i = 0; i < n; ++i) {
                ll now = min(k - 1, s);
                a[i] += now;
                s -= now;
            }
            if (s > 0) cout << "-1\n";
            else {
                for (ll i = 0; i < n; ++i) cout << a[i] << " ";
                cout << "\n";
            }
        }
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