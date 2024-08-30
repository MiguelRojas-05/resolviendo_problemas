#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<pair<long long, long long>> tasks(n);
    
    for (int i = 0; i < n; i++) {
        cin >> tasks[i].first >> tasks[i].second;
    }

    sort(tasks.begin(), tasks.end());

    long long currentTime = 0;
    long long totalReward = 0;

    for (const auto& task : tasks) {
        currentTime += task.first;
        totalReward += (task.second - currentTime);
    }

    cout << totalReward << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // int t;
    // cin >> t;
    // while (t--) {
        solve();
    // }
    
    return 0;
}
