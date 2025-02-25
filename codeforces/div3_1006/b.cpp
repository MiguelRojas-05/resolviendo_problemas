#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const ll MOD = 1e9+7;
const ll INF = 1e18;

void solve() {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        ll d = 0, u = 0;
        for(char c : s) {
            if(c == '-') d++;
            else if(c == '_') u++;
        }
        if(d < 2) {
            cout << 0 << "\n";
            return;
        }
        ll left = d / 2; 
        ll right = d - left;
        
        ll ans = u * left * right;
        cout << ans << "\n";
        
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