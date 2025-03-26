#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const ll MOD = 1e9+7;
const ll INF = 1e18;

void solve() {
    ll n; cin >> n;
    ll sum = 0; 
    for(ll i = 0; i < n; ++i){
        ll pvt; cin >> pvt;
        sum += pvt;
    }
    ll r = sqrt(sum);
    if(r*r == sum)cout <<"YES\n";
    else cout << "NO\n";
    
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