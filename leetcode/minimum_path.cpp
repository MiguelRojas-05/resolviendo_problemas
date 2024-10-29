#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
// typedef vector<int> vi;
// typedef pair<int, int> pii;

const ll MOD = 1e9+7;
const ll INF = 1e18;


//En una grilla con valores enteros positivos, encuentra la suma mínima necesaria para 
// moverte de la esquina superior izquierda a la inferior derecha.

int minPathSum(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    int ans[m][n];
    ans[0][0] = grid[0][0];
    for (int i = 1; i < m; i++)ans[0][i] = ans[0][i-1] + grid[0][i];
    for (int j = 1; j < n; j++)ans[j][0] = ans[j-1][0] + grid[j][0];
    
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            ans[i][j] = min(ans[i-1][j] + grid[i][j],ans[i][j-1] + grid[i][j]);
        }
    }
    return ans[m-1][n-1];
}

void solve() {
    vector<vector<int>> pruebita = {{1,3,1},{1,5,1},{4,2,1}};
    minPathSum(pruebita);
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