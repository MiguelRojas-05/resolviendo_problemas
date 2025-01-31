#include <bits/stdc++.h>

using namespace std;
typedef vector<int> vi;

void solve() {
    int n; cin >> n;
    vi a(n);
    int r = 0;
    int p = 0;
    for (int& x : a) cin >> x;
    for(int& e : a){
        if(e == 1){
            r = max(r, p);
            p = 0;
        }
        if(e == 0) p++;
    }
    r = max(r, p);
    cout << r << '\n';
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