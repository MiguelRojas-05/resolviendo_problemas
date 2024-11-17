#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const ll MOD = 1e9+7;
const ll INF = 1e18;

void solve() {
    int k ; cin >> k;
    int n = k - 2;
    vi lst(k);
    for(int& e : lst)cin >> e;
    sort(lst.begin(), lst.end());
    if(k > 3){
        int left = 0;
        int rigght = k-1;
        while (left < rigght)
        {
            int rq = lst[left] * lst[rigght];
            if( rq == n){
                cout << lst[left] << ' ' << lst[rigght]<<'\n';
                return;
            }else if(rq < n){
                left++;
            }else{
                rigght--;
            }
        }
    }else{
        cout << 1 << ' '<< 1 <<'\n';
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