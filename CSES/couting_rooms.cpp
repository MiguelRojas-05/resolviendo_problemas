#include <bits/stdc++.h>

using namespace std;
using ll = long long;
void solve() {
    int N, M; cin >> N >> M;
    vector<string> grid(N);
    for(string& e : grid)cin >> e;
    vector<vector<bool>>used(N, vector<bool>(M));
    auto valid = [&] (int x, int y){
        return grid[x][y] != '#' && !used[x][y];
    };

    function <void(int, int)> dfs = [&] (int r, int c){
        used[r][c] = true;
        if(r+1 < N && valid(r+1, c)) dfs(r+1, c);
        if(r-1 >= 0 && valid(r-1, c)) dfs(r-1, c);
        if(c+1 < M && valid(r, c+1)) dfs(r, c+1);
        if(c-1 >= 0 && valid(r, c-1)) dfs(r, c-1);
    };
    int total = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if(valid(i, j)){
                total++;
                dfs(i, j);
            }
        }   
    }
    cout << total << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}