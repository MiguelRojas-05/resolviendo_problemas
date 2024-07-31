#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        int first_dif = a - x;
        int second_dif = b - y;
        bool definidor = true;
        int acumulador = 0;
        if (first_dif < 0)
        {
            acumulador += first_dif;
        }
        if (second_dif < 0)
        {
            acumulador += second_dif;
        }
        if ((c + acumulador) < 0)
        {
            definidor = false;
        }

        if (definidor)
        {
            cout << "SI" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}