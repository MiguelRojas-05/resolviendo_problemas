#include <iostream>
#include <cmath>
using namespace std;

// Función para verificar si un número es un cuadrado perfecto
bool isPerfectSquare(int x) {
    int s = sqrt(x);
    return s * s == x;
}

// Función para verificar si la cadena puede formar una matriz cuadrada hermosa
bool canFormSquareBeautifulMatrix(const string& s) {
    int n = s.length();
    if (!isPerfectSquare(n)) return false; // n no es un cuadrado perfecto

    int k = sqrt(n); // Tamaño de la matriz k × k

    // Verificar bordes de la matriz
    for (int i = 0; i < k; ++i) {
        // Primer y último elemento de cada fila
        if (s[i * k] != '1' || s[i * k + k - 1] != '1') return false;
        // Primer y último elemento de cada columna
        if (s[i] != '1' || s[(k - 1) * k + i] != '1') return false;
    }

    // Verificar el interior de la matriz (debe ser cero)
    for (int i = 1; i < k - 1; ++i) {
        for (int j = 1; j < k - 1; ++j) {
            if (s[i * k + j] != '0') return false;
        }
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        if (canFormSquareBeautifulMatrix(s)) {
            cout << "Yes" << '\n';
        } else {
            cout << "No" << '\n';
        }
    }

    return 0;
}









// #include <bits/stdc++.h>

// using namespace std;

// void solve(){

// }
// int main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     return 0;
// }