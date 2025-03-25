#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const ll MOD = 1e9+7;
const ll INF = 1e18;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    map<int, int> q = {{0, 3}, {1, 1}, {2, 2}, {3, 1}, {5, 1}};
    map<int, int> counts;

    for (int i = 0; i < n; ++i) {
        int digit = a[i];
        if (q.count(digit)) counts[digit]++;
        bool ok = true;
        for (auto& [d, cnt] : q) {
            if (counts[d] < cnt) {
                ok = false;
                break;
            }
        }
        
        if(ok) {
            cout << i + 1 << '\n';
            return;
        }
    }
    cout << 0 << '\n';
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