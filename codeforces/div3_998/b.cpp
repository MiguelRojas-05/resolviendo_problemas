#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> decks(n, vector<int>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> decks[i][j];
        }
        sort(decks[i].rbegin(), decks[i].rend());
    }

    vector<pair<int, int>> lc(n);
    for (int i = 0; i < n; ++i) {
        lc[i].first = decks[i].back();
        lc[i].second = i;
    }

    sort(lc.begin(), lc.end());

    int vrf = -1;
    for (int i = 0; i < m; ++i) {
        for (auto& d : lc) {
            int idx = d.second;
            while (!decks[idx].empty() && decks[idx].back() <= vrf) {
                decks[idx].pop_back();
            }
            if (decks[idx].empty()) {
                cout << "-1\n";
                return;
            }
            vrf = decks[idx].back();
            decks[idx].pop_back();
        }
    }

    for (auto& d : lc) {
        cout << d.second + 1 << ' ';
    }
    cout << '\n';
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
