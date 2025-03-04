#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef pair<int, int> pii;

const int INF = 1e9;

void solve() {
    int n; cin >> n;
    vector<pii> a(n);
    int p = 0;
    for(auto&[l,r] : a){
        cin >> l;
        r = p++;
    }
    
    sort(a.begin(), a.end());
    int x = 0, pa = INF;
    // for(auto&[l,r] : a)cout << l << ' '<< r <<'\n';
    for(auto[l, r] : a){
        if(pa > r) x++;
        pa = r;
    }
    cout << x;
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