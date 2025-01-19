#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
    int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        int m = 0;
        int a3 = a1 + a2;
        int c1 = (a3 == a1 + a2)?1:0;
        int c2 = (a4 == a2 + a3)?1:0;
        int c3 = (a5 == a3 + a4)?1:0;
        m = max(m, c1 + c2 + c3);

        a3 = a4 - a2;
        c1 = (a3 == a1 + a2)?1:0;
        c2 = (a4 == a2 + a3)?1:0;
        c3 = (a5 == a3 + a4)?1:0;
        m = max(m, c1 + c2 + c3);

        a3 = a5 - a4;
        c1 = (a3 == a1 + a2)?1:0;
        c2 = (a4 == a2 + a3)?1:0;
        c3 = (a5 == a3 + a4)?1:0;
        m = max(m, c1 + c2 + c3);

        cout << m << '\n';
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