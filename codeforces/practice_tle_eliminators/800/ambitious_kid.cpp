#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> a;
    for(int i = 0; i < n; i++){
        int pvt;cin >> pvt;
        int k = abs(pvt);
        a.push_back(k);
    } 
    sort(a.begin(), a.end());
    cout << a[0];
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