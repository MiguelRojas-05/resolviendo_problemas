#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<ll> vl;

void solve() {
    int n; cin >> n;
    vl a(n); ll c = 10e9;
    for(ll& i : a)cin >> i;
    if(!is_sorted(a.begin(), a.end())){
        cout<< 0 << endl;
        return;
    }
    else for (int i = 1; i < n; i++)c = min(c, a[i]-a[i-1]);
    int r = (c/2)+1;
    cout << r <<'\n';
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