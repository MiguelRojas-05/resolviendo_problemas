#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<int> vi;

const ll MOD = 1e9+7;
const ll INF = 1e18;

// n pasajeros 
// m escalones, y el i-escalon mide i x k , k -> medida de cada escalón
// H altura de Vlad.
// dos personas pueden conversar en una escalera mecánica si:
// - están parados en diferentes escalones
// - diferencia altura (a - b) = (pos[a]- pos[b])*k

void solve() {
    int n, m, k, H; cin >> n >> m >> k >> H;
    int cnt = 0;
    vi h(n);
    for (int& x : h) cin >> x;
    for(int e : h){
            int t = abs(H - e);
            if(t % k == 0){
                if(t >= k && t <= (m-1)*k){
                cnt++;    
            }
        }
    }
    cout << cnt << "\n";
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