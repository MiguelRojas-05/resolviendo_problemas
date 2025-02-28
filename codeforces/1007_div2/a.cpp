#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
    ll k;
    cin >> k;
    if(k % 3 == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
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