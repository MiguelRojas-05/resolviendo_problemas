#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const ll MOD = 1e9+7;
const ll INF = 1e18;

void solve() {
    int n, q; cin >> n >> q;
    vi a(n); for(int& i : a) cin >> i;
    vi prefix(n+1); for (int i = 1; i < n+1; i++) prefix[i] = prefix[i-1] + a[i-1];
    while (q--){
        int l, r, k; cin >> l >> r >> k;
        int min = prefix[l-1];
        int y = k * ((r-l)+1);
        int x = prefix[n] - prefix[r];
        int result = min + y + x;
        // cout << min <<' '<< y <<' '<< x<<'\n';
        if(result % 2 == 0) cout << "NO\n";
        else cout << "YES\n";
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