#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n<=4) {
        cout << -1 << endl;
        return;
    }

    vector<int> perm;
    for (int i = 2; i <= n; i += 2) {
        if(i != 4){
            perm.push_back(i);
        }
    }
    perm.push_back(4);
    perm.push_back(5);
    for (int i = 1; i <= n; i += 2) {
        if(i != 5){
            perm.push_back(i);
        }
    }
    for (int i = 0; i < n; i++) {
        cout << perm[i] << " ";
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
