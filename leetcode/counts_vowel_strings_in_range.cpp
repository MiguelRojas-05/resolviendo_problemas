#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isCorrect(string word){
        char a = word[0], b = word.back();
        if((a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') && (b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u'))return true;
        return false;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int>prefix;
        prefix.push_back(0);
        for(string& w : words) {
            if(isCorrect(w))prefix.push_back(prefix.back()+1);
            else prefix.push_back(prefix.back());
        }
        vector<int> ans;
        for(auto& e : queries){
            int l = e[0], r = e[1];
            if(l == 0)ans.push_back(prefix[r+1]);
            else ans.push_back(prefix[r+1] - prefix[l]);
        }
        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution sol;
    vector<string> words = {"aba","bcb","ece","aa","e"};
    vector<vector<int>> queries = {{0,2},{1,4},{1,1}};
    auto ans = sol.vowelStrings(words, queries);
    for (int a : ans) cout << a << " "; cout << "\n";

    return 0;
}