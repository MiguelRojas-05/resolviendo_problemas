#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<ll>a(n);
    for(ll& i : a)cin >> i;
    sort(a.begin(), a.end());
    queue<ll>cola;
    cola.push(a[0]);
    for(ll& e : a){
        if(e != cola.back())cola.push(e);
    }
    cout << cola.size();
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