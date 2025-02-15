#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<int> vi;

int sumOfGoodNumbers(vector<int>& nums, int k) {
    int r = 0;
        for (int i = 0; i < nums.size(); i++){
            int a, b;
            i-k < 0 ? a = 0 : a=nums[i-k];
            i+k >= nums.size() ? b = 0: b=nums[i+k];
            if(nums[i] > a && nums[i] > b) r += nums[i];
        }
    return r;
    }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    vi a = {2,1};
    while (t--) {
        cout << sumOfGoodNumbers(a, 1);
    }

    return 0;
}