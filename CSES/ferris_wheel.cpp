#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef vector<ll> vll;

void solve() {
    int n, x; cin >>n >> x; vll a(n);
    for(ll& e : a)cin >> e;
    sort(a.begin(), a.end());
    int l = 0, r = n-1, cont = 0;
     while (l <= r) {
        if (a[r] > x) r--;
        else if (a[l] + a[r] <= x) {
            l++;
            r--;
            cont++;
        } else {
            r--;
            cont++;
        }
    }

    cout << cont << "\n";
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