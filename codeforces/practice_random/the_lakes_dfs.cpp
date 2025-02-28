#include <bits/stdc++.h>

using namespace std;
using ll = long long;
void solve() {
    int N, M; cin >> N >> M;
    vector<vector<int>> adj(N, vector<int>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> adj[i][j];
        }
    }
    vector<vector<bool>> used(N, vector<bool>(M));
    int sum;
    auto valid = [&](int x, int y){
        return 0 <= x && x < N && 0 <= y && y < M &&!used[x][y] && adj[x][y] > 0;
    };

    vector<pair<int, int>> delta = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
    
    function<void(int, int)> dfs = [&](int r, int c) {
        used[r][c] = true;
        sum += adj[r][c];
        for (auto [dx, dy] : delta) {
            int new_r = r + dx;
            int new_c = c + dy;
            if(!valid(new_r, new_c))continue;
            dfs(new_r, new_c);

        }
    };
    int ans = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(!valid(i,j))continue;
            sum = 0;
            dfs(i, j);
            ans = max(ans, sum);
            
        }
    }
    cout << ans << '\n';
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