#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const ll MOD = 1e9+7;
const ll INF = 1e18;

void moveZeroes(vector<int>& nums) {
    vector<int> apoyo;
    int n = nums.size();
    for(int i : nums) if( i != 0) apoyo.push_back(i);
    int f = n - apoyo.size();
    for(int i = 0; i < f; ++i) apoyo.push_back(0);
    nums = apoyo;
}

void solve() {
    vi arr = {-58305,-22022,0,0,0,0,0,-76070,42820,48119,0,95708,-91393,60044,0,-34562,0,-88974};
    moveZeroes(arr);
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