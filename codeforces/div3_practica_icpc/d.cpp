#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const ll MOD = 1e9+7;
const ll INF = 1e18;

void solve() {
    int days, jato, chamba; cin >> days >> jato >> chamba;
    vector<char>viaje1;
    vector<char>viaje2;
    vector<char> d1;
    vector<char> d2;
    for (int i = 0; i < days; i++)
    {
        char a,b; cin >> a >> b;
        viaje1.push_back(a);
        viaje2.push_back(b);
    }
    
    for (int i = 0; i < days; i++)
    {
        if(viaje1[i] == 'N'){
            if(chamba > 0){
                d1.push_back('N');
            }else{
                d1.push_back('Y');
                jato --;
                chamba ++;
            }
        }else{
            d1.push_back('Y');
            jato --;
            chamba ++;
        }

        if(viaje2[i] == 'N'){
            if(jato > 0){
                d2.push_back('N');
            }else{
                d2.push_back('Y');
                jato ++;
                chamba --;
            }
        }else{
            d2.push_back('Y');
            chamba --;
            jato ++;
        }
    }
    for (int i = 0; i < days; i++)
    {
        cout << d1[i]<<" "<<d2[i]<<'\n';
    }
    

    
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