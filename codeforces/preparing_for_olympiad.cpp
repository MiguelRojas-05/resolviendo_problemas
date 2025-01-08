#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<int> vi;
void solve() {
    int n; cin >> n;
    vi m(n);
    vi s(n);
    int d = 0;
    for(int& i : m) cin >> i;
    for(int& k : s) cin >> k;
    for(int i = n-2; i >= 0 ; i--) {
        int r = m[i]-s[i+1];
        if(r > 0)d += r;
    }
    cout << d + m[n-1] <<'\n';
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