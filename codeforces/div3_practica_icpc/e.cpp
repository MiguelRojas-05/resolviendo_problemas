#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const ll MOD = 1e9+7;
const ll INF = 1e18;

void solve() {
    int n, k , e;
    cin >> n >> k >> e;
    int first_place = e;
    int second_place = n - (k + e);
    int pvt = 0;
    int tird = 0;
    if(first_place != k ) pvt = first_place;
    else if(first_place >= 2) pvt = first_place-1;
    if((second_place != k) && (second_place != pvt)) tird = second_place;
    else if(second_place >= 2 && (second_place != pvt) && (second_place != k) ) tird = second_place -1;

    // cout << k <<" "<< pvt<<" "<< tird;
    cout << n - (k + pvt + tird);
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