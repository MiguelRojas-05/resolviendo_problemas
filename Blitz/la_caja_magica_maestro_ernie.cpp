#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<vector<int>> v(n);
    
    while (q--) {
        int rf; 
        cin >> rf;
        
        switch (rf) {
            case 0: {
                int t, x;
                cin >> t >> x;
                v[t].push_back(x);
                break;
            }
            case 1: {
                int t;
                cin >> t;
                for (int i = 0; i < v[t].size(); i++) {
                    cout << v[t][i] << " ";
                }
                cout << "\n";
                break;
            }
            case 2: {
                int t;
                cin >> t;
                v[t].clear();
                break;
            }
        }
    }
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
