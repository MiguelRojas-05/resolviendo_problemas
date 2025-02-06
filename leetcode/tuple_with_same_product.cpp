#include <bits/stdc++.h>

using namespace std;
using ll = long long;
typedef vector<int> vi;

int tupleSameProduct(vector<int>& nums) {
    int ans = 0;
        unordered_map<int, int> count;

        for (int i = 0; i < nums.size(); ++i) {
            for (int j = 0; j < i; ++j) {
                int prod = nums[i] * nums[j];
                ans += count[prod]++ * 8;
            }
        }
        return ans;   
    }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        vi prueba = {1,2,4,5,10};
        cout << tupleSameProduct(prueba);
    }

    return 0;
}