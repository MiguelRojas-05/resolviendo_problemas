#include <bits/stdc++.h>
using namespace std;

int maxDifference(string s) {
    unordered_map<char, int> fq;

    for (char c : s) fq[c]++;

    vector<int> pares, impares;

    
    for (const auto& par : fq) {
        if (par.second % 2 == 0) pares.push_back(par.second);
        else impares.push_back(par.second);
    }

    int max_diff = INT_MIN;

    for (int impar : impares) {
        for (int par : pares) {
            max_diff = max(max_diff, impar - par);
        }
    }

    return max_diff;
}

int main() {
    string s = "mmsmsym";
    cout << "Diferencia máxima: " << maxDifference(s) << endl; // Ahora devuelve -1
    return 0;
}
