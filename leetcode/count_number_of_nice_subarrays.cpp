#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class Solution
{
public:
    int numberOfSubarrays(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        mp[0] = 1;
        int imp = 0;
        int r = 0;

        for (int num : nums){
            if (num % 2 != 0)imp++;
            if (mp.find(imp - k) != mp.end())r += mp[imp - k];
            mp[imp]++;
        }
        return r;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution sol;
    vector<int> nums = {2, 2, 2, 1, 2, 2, 1, 2, 2, 2};
    int k = 2;
    cout << sol.numberOfSubarrays(nums, k) << '\n'; // return 2
    return 0;
}