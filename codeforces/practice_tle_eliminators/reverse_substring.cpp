#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int l, r;
    for(int i = 1; i < n; ++i){
        if(s[i-1] > s[i]){
            l = i; r = i+1;
            cout << "YES\n"<<l<<' '<<r;
            return;
        }
    }
    cout <<"NO\n";
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