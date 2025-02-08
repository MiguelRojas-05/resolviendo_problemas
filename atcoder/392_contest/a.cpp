#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef vector<int> vi;
void solve() {
    int a, b, c; cin >>a >>b >>c;
    if(a*b == c || a*c == b || b*c == a)cout << "Yes";
    else cout << "No";
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