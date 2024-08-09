#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    string y;
    cin >> s;
    cin.ignore();
    getline(cin, y);
    string finally = "";
    bool spacelast = false;

    for (int i = 0; i < y.length(); i++) {
        bool d = true;
        for (int j = 0; j < s.length(); j++) {
            char c = toupper(s[j]);
            if (y[i] == s[j] || y[i] == c) {
                d = false;
                break;
            }
        }
        if (d == true) {
            if (y[i] != ' ') {
                finally += y[i];
                spacelast = false;
            } else if (!spacelast && !finally.empty()) {
                finally += ' ';
                spacelast = true;
            }
        }
    }

    cout << finally << endl;
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
