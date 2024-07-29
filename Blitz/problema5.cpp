#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    while (n--) {
        bool d = true;
        string s;
        cin >> s;
        s.erase(0, 1);
        s.erase(s.size() - 1);

        for (int i = 0; i < s.size() / 2; i++) {
            if (s[i] != s[s.size() - i - 1]) {
                d = false;
                break;
            }
        }

        if (d) {
            cout << "SI" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
