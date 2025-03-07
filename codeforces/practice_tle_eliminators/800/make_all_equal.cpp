#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    map<int,int> a;
    for(int i = 0; i < n; ++i){
        int pvt; cin >> pvt;
        a[pvt]++;
    }
    
    // for(auto [l, r] : a) cout << l <<' '<<r<<'\n';
    int maximus = 0;
    for(auto& it : a){
        maximus = max(maximus, it.second);
    }
    cout << (n - maximus)<<'\n';
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