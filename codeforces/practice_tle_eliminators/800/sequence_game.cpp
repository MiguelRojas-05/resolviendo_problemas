#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<ll> a(n);
    vector<ll> result;
    for(ll& e : a)cin >> e;
    result.push_back(a[0]);
    for(ll i = 1; i < n; i++){
        if(a[i]>=a[i-1])result.push_back(a[i]);
        else{
            result.push_back(a[i]);
            result.push_back(a[i]);
        }
    }
    cout << result.size()<<'\n';
    for(ll& e : result)cout << e << ' ';
    cout <<'\n';
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