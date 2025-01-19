#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int& e : a)cin >> e;
    // for(int& e : a)cout << e <<' ';
    // cout<<'\n';

    int c = 0;
    for(int i = 0; i < n; i++){
        int r = a[i] - c;
        if(r < 0){
            cout << "NO"<<'\n';
            return;
        }
        // cout << r << " " << a[i] <<'\n';
        c = r;
    }
    cout << "YES" << '\n';    
    // cout << "-------------"<<'\n';
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