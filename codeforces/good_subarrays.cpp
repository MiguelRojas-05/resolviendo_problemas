#include <bits/stdc++.h>

using namespace std;
using ll = long long;
typedef vector<int> vi;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    
    vi A(n);
    for (int i = 0; i < n; i++) {
        A[i] = s[i] - '0';
    }
    
    map<ll, ll> prefix_count;
    ll prefix_sum = 0, contador = 0;

    prefix_count[0] = 1;

    for (int i = 0; i < n; ++i) {
        prefix_sum += A[i];

        ll key = prefix_sum - (i + 1);

        if (prefix_count.count(key)) {
            contador += prefix_count[key];
        }
        prefix_count[key]++;
    }
    cout << contador << '\n';
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
