#include <bits/stdc++.h>

using namespace std;
using ll = long long;
void solve() {
    int N, M; cin >> N >> M;
    vector<vector<int>> adj(N+1);
    for(int i = 0; i < N-1; i++){
        int u, v; cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> d(N+1);
    vector<bool> used(N+1);

    function<void(int)> dfs = [&](int u){
        used[u] = true;
        for(int v : adj[u]){
            if(used[v])continue;
            dfs(v);
            d[u] += d[v];
        }
        if(adj[u].size() == 1 && u > 1) d[u] = 1;
    };
    dfs(1);
    int q; cin >> q;
    while(q--){
        int x, y; cin >> x >> y;
        cout << 1LL *  d[x] * d[y] << '\n';
    } 
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