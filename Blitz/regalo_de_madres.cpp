#include <bits/stdc++.h>

using namespace std;

void solve() {
    int m, d, r;
    cin >> m >> d >> r;
    vector<int> v(r);
    for (int i = 0; i < r; i++) {
        cin >> v[i];
    }
    int maxcom = m * d;
    int result = 0; 
    int punt = maxcom + 1; 
    for (int i = 0; i < r; i++) {
        int dif = maxcom - v[i];
        if (dif >= 0 && dif < punt) {
            punt = dif;
            result = v[i];
        }
    }
    cout << result << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
