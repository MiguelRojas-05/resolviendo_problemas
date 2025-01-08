#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m, k; 
    cin >> n >> m >> k;

    vector<bool> guia(n + 1, false);
    vector<int> faltan(m);
    for (int i = 0; i < m; i++) cin >> faltan[i];        
    for (int i = 0; i < k; i++) {
        int x; 
        cin >> x;
        guia[x] = true;
    }
    string s = "";
    for (int i = 0; i < m; i++) {
        k == n || (k == n - 1 && !guia[faltan[i]])?s += '1':s += '0';
    }
    cout << s << '\n';
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
