#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Solution {
public:
    vector<int> prefix;
    int subarraySum(vector<int>& nums, int k) {
        prefix.resize(nums.size() + 1);
        prefix[0] = 0;
        for(int i = 1; i <= nums.size(); i++) prefix[i] = prefix[i-1] + nums[i-1];

        int count = 0;
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i+1; j <= nums.size(); j++) {
                int sum = prefix[j] - prefix[i];
                if(sum == k) count++;
            }
        }
        return count;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> nums = { 1,1,1};
    int k = 2;  
    vector<int> nums1 = { 1,2,3,3,1,1,1,2};
    int k1 = 3;
    Solution sol;
    cout << sol.subarraySum(nums, k) << '\n'; // return 2
    cout << sol.subarraySum(nums1, k1) << '\n'; // return 2

    return 0;
}