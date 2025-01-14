#include <bits/stdc++.h>

using namespace std;
using ll = long long;
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
    vector<int> recorrido(n+1);
    queue<pair<int,int>> q;
    q.push({1,0});
    used[1] = true;
    recorrido[1] = -1;

    while (!q.empty())
    {
        auto [u, dist] = q.front();q.pop();
        if(u == n){
            cout << dist + 1 << '\n';
            vector<int> camino;
            int pvt = u;
            while(recorrido[pvt] != -1){
                camino.push_back(pvt);
                pvt = recorrido[pvt];
            }
            camino.push_back(pvt);
            reverse(camino.begin(), camino.end());
            for(int& e : camino)cout << e << " "; 
            return;
        }
        for (int v : adj[u]){
            if(used[v])continue;
            q.push({v, dist+1});
            used[v] = true;
            recorrido[v] = u;
        }
    }
    cout<<"IMPOSSIBLE"<<'\n';
    
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