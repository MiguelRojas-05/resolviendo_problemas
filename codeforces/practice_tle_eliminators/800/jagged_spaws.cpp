#include <bits/stdc++.h>

using namespace std;
using ll = long long;
typedef vector<int> vi;

void solve() {
    int n; cin >> n;
    vi a(n);
    for (int& e : a) cin >> e;
    if(a[0]!= 1)cout << "NO\n";
    else cout << "YES\n";
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