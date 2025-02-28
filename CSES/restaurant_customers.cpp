#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef pair<ll, int> pli;

void solve() {
    int n;  cin >> n;
    vector<pli> a(n*2);
    for (int i = 0; i < n*2; i += 2){
        cin >> a[i].first;
        a[i].second = 1;
        cin >> a[i+1].first;
        a[i+1].second = -1;
    }
    sort(a.begin(), a.end());
    ll cont_parcial = 0, cont_total = 0;
    for(pli& e : a){
        cont_total = max(cont_total, (cont_parcial += e.second));
    }
    cout << cont_total;
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