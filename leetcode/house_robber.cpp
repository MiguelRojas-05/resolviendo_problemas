#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<int> vi;
// typedef pair<int, int> pii;

const ll MOD = 1e9+7;
const ll INF = 1e18;


//Examples:

// Input: nums = [1,2,3,1]
// Output: 4
// Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
// Total amount you can rob = 1 + 3 = 4.

// Input: nums = [2,7,9,3,1]
// Output: 12
// Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
// Total amount you can rob = 2 + 9 + 1 = 12.

// caso especial el vector llamado "otra"

int rob(vector<int>& nums) {
    int l = nums.size();
    int cajas [l];
    if(l == 1)return nums[0];
    else if(l == 2) return max(nums[0], nums[1]);
    else{
        cajas[0] = nums[0];
        cajas[1] = nums[1];
        cajas[2] = nums[2] + cajas[0];
        if(l > 2){
            for (int i = 3; i < l; i++)
            {
                cajas[i] = max(nums[i]+cajas[i-2],nums[i]+cajas[i-3]);
            }
        }
        return max(cajas[l-1], cajas[l-2]);
    }
    
}

void solve() {
    vector<int> lista = {2, 1, 1 ,2};
    vi otra = {1,2,3,1};
    vi hope = {2,7,9,3,1};
    int r = rob(lista);
    cout << r;
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