#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const ll MOD = 1e9+7;
const ll INF = 1e18;

void solve() {
    int n; cin >> n;
    if (n % 2 == 0) {
        cout << -1 << '\n';
        return;
    }
    if (n == 1) {
        cout << 1 << '\n';
        return;
    }
    vi permut;

    for (int i = 1; i <= n; i += 2) permut.push_back(i);
    for (int i = 2; i <= n; i += 2) permut.push_back(i);
    for (int x : permut) cout << x << " ";
    cout << '\n';

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