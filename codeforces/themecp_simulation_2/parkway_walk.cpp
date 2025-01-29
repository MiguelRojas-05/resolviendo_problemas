#include <bits/stdc++.h>

using namespace std;

int solve() {
    int n, m; cin >> n >> m;
    int rt = 0;
    for (int i = 0; i < n; i++){
        int pvt; cin >> pvt;
        rt += pvt;
    }
    if(rt <= m) return 0;
    return rt - m;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        cout << solve()<<'\n';
    }

    return 0;
}