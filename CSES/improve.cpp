#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
  int n, q;
  cin >> n >> q;
  
  vector<vector<int>> matriz(n, vector<int>(n, 0));

  // Llenar matriz inicial
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      char pvt;
      cin >> pvt;
      matriz[i][j] = (pvt == '*') ? 1 : 0;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      matriz[i][j] += (i > 0 ? matriz[i - 1][j] : 0)
                   + (j > 0 ? matriz[i][j - 1] : 0)
                   - (i > 0 && j > 0 ? matriz[i - 1][j - 1] : 0);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << matriz[i][j] << ' ';
    }
    cout << '\n';
  }

  while (q--) {
    int y1, x1, y2, x2;
    cin >> y1 >> x1 >> y2 >> x2;
    y1--; x1--; y2--; x2--;
    
    int r = matriz[y2][x2]
            - (x1 > 0 ? matriz[y2][x1 - 1] : 0)
            - (y1 > 0 ? matriz[y1 - 1][x2] : 0)
            + (y1 > 0 && x1 > 0 ? matriz[y1 - 1][x1 - 1] : 0);
    
    cout << r << '\n';
  }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}
