#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;

        long long dist_cic = a + b + c;
        long long cic_com = n / dist_cic;
        long long mm = cic_com * dist_cic;
        long long dd = cic_com * 3;

        if (mm < n) {
            dd++;
            mm += a;
            if (mm >= n) {
                cout << dd << '\n';
                continue;
            }
            
            dd++;
            mm += b;
            if (mm >= n) {
                cout << dd << '\n';
                continue;
            }
            
            dd++;
            mm += c;
            if (mm >= n) {
                cout << dd << '\n';
                continue;
            }
        }

        cout << dd << '\n';
    }
    return 0;
}
