#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const ll MOD = 1e9+7;
const ll INF = 1e18;

void solve() {
    int n, q; 
    cin >> n >> q;
    vi a(n); 
    for(int& i : a) cin >> i;
    
    int max_val = *max_element(a.begin(), a.end());
    
    while(q--) {
        char op;
        int l, r;
        cin >> op >> l >> r;
        
        if(l <= max_val && max_val <= r) {
            if(op == '+') max_val++;
            else max_val--;
        }
        
        cout << max_val << " ";
    }
    cout <<'\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}