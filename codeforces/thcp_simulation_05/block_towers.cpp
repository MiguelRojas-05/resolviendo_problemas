#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef vector<int> vi;

void solve() {
    int n; cin >> n;
    vi a(n); for(int& i: a) cin >> i;
    int x = a[0];
    sort(a.begin()+1, a.end());
    for (int i = 1; i < n; i++){
        int s = (a[i] - x + 1)/2;
        if(a[i] > x) x += s;
    }
    cout << x<<'\n';
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