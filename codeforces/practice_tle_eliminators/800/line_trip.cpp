#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef vector<int> vi;

void solve() {
    int n, x; cin >> n >> x;
    vi a(n+1);
    a[0] = 0;
    for (int i = 1; i < n+1; i++) cin >> a[i];
    a.push_back(x);
    sort(a.begin(), a.end());
    // for(int& e: a)cout << e << ' ';
    // cout << '\n';
    int df = 0;
    for(int i = 1; i <= n+1; i++){
        if(a[i] == x)df = max(df, 2*(a[i]-a[i-1]));
        df = max(df, a[i]-a[i-1]);
    }
    cout << df << '\n';
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