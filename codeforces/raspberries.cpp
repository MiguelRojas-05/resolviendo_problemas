#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const ll mdd = 1e9+7;
// const ll INF = 1e18;

void solve() {
    int n, k; cin >> n >> k;
    vi arr(n);
    for(int& e : arr) cin >> e;
    int rs = mdd;
    int even = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]% k == 0)rs = arr[i]% k;
        else{
            rs= min(rs, k-(arr[i]%k));
        }
        if(k == 4){
            
            if(arr[i] % 2 == 0)even++;
            if(even == 2) rs = min(0, rs);
            if(even == 1) rs = min(1,rs);
            if(even == 0) rs = min(2, rs);
        }
    }
    cout << rs <<'\n';
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