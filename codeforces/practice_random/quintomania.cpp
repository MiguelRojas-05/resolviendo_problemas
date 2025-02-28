#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const ll MOD = 1e9+7;
const ll INF = 1e18;

void solve() {
    int n; cin >> n;
    vi cebollin(n);
    for(int& x : cebollin)cin >> x;
    for (int i = 1; i < n; i++)
    {
        int pvt;
        pvt = abs(cebollin[i] - cebollin[i-1]);
        if(pvt != 5 && pvt != 7){
            cout << "NO" <<'\n';
            return;
        }
    }
    cout << "YES" <<'\n';       
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