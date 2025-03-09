#include <bits/stdc++.h>
using namespace std;


void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    cin >> n >> s;

    vector<int> f_left(26, 0), f_right(26, 0);
    int dif_left = 0, dif_right = 0;

    for (char c : s) {
        if (f_right[c - 'a'] == 0) dif_right++;
        f_right[c - 'a']++;
    }
    int r = 0;
    for (int i = 0; i < n - 1; i++) {
        char c = s[i];
        if (f_left[c - 'a'] == 0) dif_left++;
        f_left[c - 'a']++;
        f_right[c - 'a']--;
        if (f_right[c - 'a'] == 0) dif_right--;

        r = max(r, dif_left + dif_right);
    }

    cout << r << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
