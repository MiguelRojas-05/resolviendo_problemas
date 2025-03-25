#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const ll MOD = 1e9+7;
const ll INF = 1e18;

void solve() {
    int k, q; cin >> k >> q;
    vi a(k); for(int& i : a) cin >> i;
    vi nums(q); for(int& i : nums) cin >> i;
    vi response(q);
    for(int e : nums){
        if(e < a[0]-1) cout << e <<' ';
        else cout << a[0]-1<<' ';
    }
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