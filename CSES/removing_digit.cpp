#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const ll MOD = 1e9+7;
const ll toppp = 1e6;

// Entender el problema. Te dan "n" y se necesita restar un digito en cada paso, y se quiere saber el minimo numero de pasos para hacer que ese "n" sea 0.

// funcion . Mínimo número de pasos para hacer que n sea 0. Operando: que en cada paso se reste un digito de n.
// 1 <= n <= 10^6

// Funcion de recurrencia o recursividad . dp[i] = dp[i-(mayor de sus digitos)]+1;

// dp[i]
// dp[0] =0;
// dp[1] = dp[1-1] +1; 1;
// dp[2] = dp[2-2] +1; 1;
// 1-9 = 1
// dp[10] = dp[9]+1; = 1+1; = 2;
// dp[11] = dp[11-1] +1 = dp[10] +1; = 3;
// 11-1

// dp[12] = dp[12-2]+1; dp[10]+1 = 3;
// dp[20] = dp[20-2]+1; dp[18] +1; 4
// dp[21] = dp[21-2] +1 = dp[19]+1; 4
void precalculo(int x){
    vector<int> dp(toppp, toppp);
    dp[0] = 0;

    auto check = [&](int k){
        string s = to_string(k);
        int mx =  -1;
        for (int i = 0; i < (int)s.size(); i++)
        {
            mx = max(mx, s[i]-'0');
        }
        return mx;
    };

    for (int i = 1; i < toppp; i++)
    {
        int c = check(i);
        dp[i] = min(dp[i], dp[i-c]+1);   
    }
    cout << dp[x];
}

void solve() {
    int n;  cin>> n;
    precalculo(n);

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