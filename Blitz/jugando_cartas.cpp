#include <bits/stdc++.h>
using namespace std;

void solve() {
    string mesa;
    cin >> mesa;
    vector<string> mano(5);
    bool d = false;
    for (int i = 0; i < 5; i++) {
        cin >> mano[i];
    }
    for (int i = 0; i < 5; i++) {
        if (mesa[0] == mano[i][0] || mesa[1] == mano[i][1]) {
            cout << "SI" << endl;
            d = true;
            break; 
        }
    }
    if (d==false) {
        cout << "NO" << endl;
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
