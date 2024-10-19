#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
// typedef vector<int> vi;
// typedef pair<int, int> pii;

// const ll MOD = 1e9+7;
// const ll INF = 1e18;

void solve() {
    int l,f;
    cin >>l >> f;
    vector<int>vi(l);
    for(auto& x : vi)cin >> x;
    sort(vi.begin(), vi.end());
    while (f--)
    {
        char c;
        int a , b;
        cin >> c >> a >> b;
        int i = 0;
        while (((b-vi[i])>=0) && (i < l))
        {
            if(c == '+'){
               if((vi[i]-a >= 0)){
                vi[i] = vi[i]+1;
               }
            }else{
                if((vi[i]-a >= 0)){
                vi[i] = vi[i]-1;
               }
            }
            i++;
        }
        sort(vi.begin(), vi.end());
        cout << *(vi.end()-1)<<' ';
    }
    cout <<'\n';
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