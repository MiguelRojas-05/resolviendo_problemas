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
    vi a(n);
    for(int& i : a) cin >> i;
    int left = 1, right = 1, idx = 0, maximum = 1;
    while (a[idx] == a[idx + 1]){
        left++;
        idx++;
    } 
    // cout << idx <<'\n';
    for (int i = idx+1; i < n; i++){
        if(i+1 < n){
            if(a[i] == a[i + 1])right++;
            else {
                maximum = max(maximum, min(left, right));
                left = right; right = 1;
            }
        }
    }
    maximum = max(maximum, min(left, right));
    left = right; right = 1;
    cout << maximum * 2;    
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