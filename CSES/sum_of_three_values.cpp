#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<ll> vll;
typedef pair<int, int> pii;

const ll MOD = 1e9+7;
const ll INF = 1e18;

void solve() {
    int n;
    ll x;
    cin >> n >> x;
    // vll group(n);
    // for(ll& e : group) cin >> e;
    vector<pair<ll, int>>hash;
    for(int i = 0; i < n; i++){
        ll pvt; cin >> pvt;
        hash.push_back(make_pair(pvt, i));
    }
    // for(auto& e : hash)cout << e.first << " "<< e.second<<'\n';

    sort(hash.begin(), hash.end());

    
    for (int i = 0; i < n - 2; i++) {
        ll target = x - hash[i].first;
        ll left = i + 1;
        ll right = n - 1;
        while (left < right)
        {
            ll sum = hash[left].first + hash[right].first;
            if (sum == target){
                vector<ll>imp;
                imp.push_back(hash[i].second+1);
                imp.push_back(hash[left].second+1);
                imp.push_back(hash[right].second+1);
                sort(imp.begin(), imp.end());
                for(ll& e : imp)cout << e << " "; 
                return;
            }else if(sum < target){
                left ++;
            }else{
                right --;
            }
               
        }
        
    }
    
    cout << "IMPOSSIBLE" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}
