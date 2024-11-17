#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const ll MOD = 1e9+7;
const ll INF = 1e18;

void solve() {
    int n; cin >> n;
    vi lst(n);
    for(int& e : lst)cin >> e;
    sort(lst.begin(), lst.end());
    // for(int& e : lst)cout << e <<' ';
    if(lst.size()>1){
        int left = 0;
        int right = 1;
        int rq = 0;
        while (left<right && right < lst.size())
        {
            if(lst[left] == lst[right]){
                rq++;
                left++;
                right++;    
            }
            left++;
            right++;
        }
        cout << rq << '\n';        
    }else{
        cout << 0 << '\n';
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