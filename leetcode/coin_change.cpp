#include <bits/stdc++.h>
using namespace std;

int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount + 1, amount + 1);
    dp[0] = 0; // Inicializar dp[0] a 0 ya que se requieren 0 monedas para alcanzar 0
    
    // Llenado de la tabla dp
    for (int i = 1; i <= amount; ++i) {
        for (int coin : coins) {
            if (coin <= i) { // Si se puede usar la moneda actual
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }
    
    // Si dp[amount] aún tiene el valor alto, significa que no es posible alcanzar el monto
    return dp[amount] > amount ? -1 : dp[amount];
}

void solve() {
    vector<int> monedas1 = {1, 2, 5}; int monto1 = 4;
    cout << "Resultado para monto " << monto1 << ": " << coinChange(monedas1, monto1) << endl;

    vector<int> monedas2 = {2}; int monto2 = 3;
    cout << "Resultado para monto " << monto2 << ": " << coinChange(monedas2, monto2) << endl;

    vector<int> monedas3 = {1}; int monto3 = 0;
    cout << "Resultado para monto " << monto3 << ": " << coinChange(monedas3, monto3) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
