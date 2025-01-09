#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const ll INF = 1e18;

void solve() {
    int n, m; cin >> n >> m;
    vector<vector<int>> adj(n+1);
    for (int i = 0; i < m; i++)
    {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> used(n+1);
    function<void(int)> dfs = [&](int u){
        used[u] = true;
        for( int v : adj[u]){
            if( used[v])continue;
            dfs(v);
        }
    };

    vector<int> marcados;
    for(int u = 1; u <= n; u++){
        if(used[u])continue;
        marcados.push_back(u);
        dfs(u);
    }
    cout << marcados.size()-1 << '\n';
    for(int i = 0; i < marcados.size()-1; i++){
        cout << marcados[i] << " " << marcados[i+1] << '\n';
    }
    

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