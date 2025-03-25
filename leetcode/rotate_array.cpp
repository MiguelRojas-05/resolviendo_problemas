#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const ll MOD = 1e9+7;
const ll INF = 1e18;
void rotate(vector<int>& nums, int k) {
  int len = nums.size();
  k = k % len;
  stack<int>apoyo;
  for(int i = 0; i < k; ++i) apoyo.push(nums[len - i - 1]);
  for(int i = len-1; i > k-1; --i){
    nums[i] = nums[i-k];
  }
  for(int i = 0; i < k; i++){
    nums[i] = apoyo.top();
    apoyo.pop();
  }
  for(int e : nums) cout << e << " ";
}
void solve() {
    vector<int> numeros = {1,2,3,4,5,6,7};
    rotate(numeros, 3);
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