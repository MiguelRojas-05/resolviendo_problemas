#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const double INF = 1e12;

void solve() {
    int a, b; cin >> a >> b;
    int n; cin >> n;
    double res = INF;
    while (n--){
        int x, y, z; cin >> x >> y >> z;
        double d = sqrt((x - a) * (x - a) + (y - b) * (y - b));
        double t = d / z;
        res = min(res, t);
    }
    cout << fixed << setprecision(20)<< res;
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