#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

void solve() {
    int n; 
    cin >> n;
    vi jkl(n);
    for (int &e : jkl) cin >> e;

    int total_sum = 0;
    for (int &c : jkl) total_sum += c;

    if (total_sum % n != 0) {
        cout << "NO" << '\n';
        return;
    }

    int target = total_sum / n;

    bool par = false, impar = false;
    int sum_pares = 0, sum_impares = 0;
    int count_pares = 0, count_impares = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum_pares += jkl[i];
            count_pares++;
        } else {
            sum_impares += jkl[i];
            count_impares++;
        }
    }

    if (count_pares > 0 && sum_pares / count_pares == target) par = true;
    if (count_impares > 0 && sum_impares / count_impares == target) impar = true;

    if (par && impar) 
        cout << "YES" << '\n';
    else 
        cout << "NO" << '\n';
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
