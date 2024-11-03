#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

// const ll MOD = 1e9+7;
// const ll INF = 1e18;

void solve() {
    ll n, p; cin >> n >> p;
    ll r = (n - p);
    r %= 2 * p;
    if(r == 0 || r == p) { cout << "0\n"; return; }
    cout << r << '\n';
    }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}