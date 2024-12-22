#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> w(n);

    for (string& x : w) {
        cin >> x;
    }

    int t = 0, c = 0;

    for (const string& x : w) {
        if (t + x.length() > m) {
            break;
        }
        t += x.length();
        c++;
    }

    cout << c << '\n';   
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
