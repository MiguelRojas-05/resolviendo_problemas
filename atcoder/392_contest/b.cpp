#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef vector<int> vi;
void solve() {
    int n,m; cin >> n >> m;
    vi a(m);
    vi vr;
    for(int& x : a) cin >> x;
    sort(a.rbegin(), a.rend());
    for(int i = 1; i <= n; i++){
        if(i == a.back())a.pop_back();
        else vr.push_back(i);
    }
    cout << vr.size() << endl;
    if(vr.size()>0)for(int& e: vr)cout << e << ' ';
        
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