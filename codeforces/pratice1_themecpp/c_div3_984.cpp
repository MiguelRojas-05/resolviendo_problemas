#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        string s;
        int q;
        cin >> s >> q;
        int n = s.size();
        
        set<int> occ;
        auto checkPos = [&](int i) {
            if(i < 0 || i + 3 >= n) return false;
            return (s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0');
        };
        
        for (int i = 0; i <= n - 4; i++){
            if(checkPos(i))
                occ.insert(i);
        }
        
        while(q--){
            int pos, v;
            cin >> pos >> v;
            pos--;
            s[pos] = char(v + '0');
            for (int i = pos - 3; i <= pos; i++){
                if(i < 0 || i > n - 4) continue;
                if(occ.count(i))
                    occ.erase(i);
                if(checkPos(i))
                    occ.insert(i);
            }
            cout << (occ.empty() ? "NO" : "YES") << "\n";
        }
    }
    return 0;
}
