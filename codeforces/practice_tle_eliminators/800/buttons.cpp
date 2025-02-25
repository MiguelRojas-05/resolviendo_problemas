#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
    ll a, b, c; cin >> a >> b >> c;
    bool band = true;
    if(c % 2 == 0)band = false;
    if(a > b)cout << "First\n";
    else if (a < b)cout << "Second\n";
    else (band?cout<<"First\n":cout<<"Second\n");
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