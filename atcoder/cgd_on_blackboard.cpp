#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef vector<int> vi;

int max_c_d(int a, int b) {
    return __gcd(a, b);
}

void solve() {
    int n; 
    cin >> n;
    vi A(n);
    for (int& i : A) cin >> i;

    vi L(n + 1, 0);
    vi R(n + 2, 0);

    for (int i = 1; i <= n; i++) {
        L[i] = max_c_d(L[i - 1], A[i - 1]);
    }

    for (int i = n; i >= 1; i--) {
        R[i] = max_c_d(R[i + 1], A[i - 1]);
    }

    int ans = 0;
    
    for (int i = 1; i <= n; i++) {
        ans = max(ans, max_c_d(L[i - 1], R[i + 1]));
    }

    cout << ans << '\n';
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
