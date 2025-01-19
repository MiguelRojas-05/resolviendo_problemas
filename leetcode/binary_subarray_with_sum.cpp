#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Solution {
private:
    int count(vector<int>& nums,int goal){
        int left=0,right=0,sum=0,count=0;
        while(right<nums.size()){
            sum+=nums[right];
            while(sum>goal && left<=right){
                sum-=nums[left];
                left++;
            }

            if(sum<=goal){
                count+=right-left+1;
            }
            right++;
        }
        return count;
    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return count(nums,goal)-count(nums,goal-1);
    }
};
// class Solution {
// public:
//     int numSubarraysWithSum(vector<int>& nums, int goal) {
//         unordered_map<int,int> mp;
//         mp[0] = 1;
//         int sum = 0;
//         int r = 0;
//         for(int& num : nums){
//             sum += num;
//             if(mp.count(sum - goal))r+=mp[sum-goal];
//             mp[sum]++;
//         }
//         return r;
//     }
// };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    vector<int> nums = {0,0,0,0,0};
    int goal = 0;
    cout << sol.numSubarraysWithSum(nums, goal) << '\n'; // return 4
    return 0;
}
