#include <bits/stdc++.h>

using namespace std;

void solve() {
    string n;
    cin >> n;

    int sum = 0;
    bool canTransform = false;
    vector<int> vint;

    for (char c : n) {
        int digit = c - '0';
        sum += digit;

        // Verifica si hay un dígito que puede convertirse en 9
        if (digit == 2 || digit == 3) {
            canTransform = true;
            if(digit == 2)vint.push_back(2);
            if(digit == 3)vint.push_back(6);
        }
    }

    // Si la suma es divisible por 9, responde "YES"
    if (sum % 9 == 0) {
        cout << "YES\n";
    } else if (canTransform) {
        // Si se puede transformar algún dígito para que S sea múltiplo de 9
            cout << "YES\n";
    } else {
        cout << "NO\n";
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
