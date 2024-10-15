#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef pair<int, int> pii;

const ll MOD = 1e9+7;
const ll INF = 1e18;

void solve() {
    ll n;
    cin >> n;
    vector<ll>vi;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        vi.push_back(x);
    }
    sort(vi.rbegin(), vi.rend());
    while (vi.size() > 2)
    {
        ll top,pis,niu;
        top = *(vi.end()-1);
        pis = *(vi.end()-2);
        niu = (top + pis)/2;
        vi.pop_back();
        vi.pop_back();
        vi.push_back(niu);
    }
    cout << (vi[0]+ vi[1])/2<<'\n';
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