#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// typedef long long ll;
typedef vector<int> vi;
// typedef pair<int, int> pii;

// const ll MOD = 1e9+7;
// const ll INF = 1e18;

void solve() {
    int n; cin >> n;
    vi apoyo(n);
    for(int& e : apoyo) cin >> e;
    map<int, int> lista;
    int fijador = 0;
    for (int i = 0; i < n; i++)    
    {
        lista[apoyo[i]]++;
        fijador = max(lista[apoyo[i]], fijador);
    }
    // for(auto& p : lista)cout << p.first << " "<< p.second<<'\n';

    cout << n - fijador <<'\n';
    
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