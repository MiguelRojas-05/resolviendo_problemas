#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class NumArray {
public:
    vector<int>prefix;
    NumArray(vector<int>& nums) {
        prefix.resize(nums.size());
        prefix[0] = nums[0];
        for(int i = 1; i < nums.size(); i++) prefix[i] = prefix[i-1] + nums[i];
    }
    
    int sumRange(int left, int right) {
        return prefix[right] - ((left-1)>=0?prefix[left-1]:0);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 5;
    vector<int> nums = { -2, 0, 3, -5, 2 , -1};
    NumArray numArray(nums);
    cout << numArray.sumRange(0, 2) << '\n'; // return -1
    cout << numArray.sumRange(2, 5) << '\n'; // return 1
    cout << numArray.sumRange(0, 5) << '\n'; // return -3

    return 0;
}