#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const ll MOD = 1e9+7;
const ll INF = 1e18;

void solve() {
    string s;cin >> s;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == s[i+1]){
            cout << 1 << endl;
            return;
        }
    }
    cout << s.length() << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}