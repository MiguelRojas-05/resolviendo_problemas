#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    priority_queue<int> pq(a.begin(), a.end());

    while (pq.size() > 1) {
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        int new_x = x + y - 1;
        pq.push(new_x);
    }
    cout << pq.top() << "\n";
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