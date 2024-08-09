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
        // diferencia entre comida de perros - cantidad de perros
        int r = a - x;
        // diferencia entre comida de gatos - cantidad de gatos
        int h = b - y;
        // creamos bool para saber si alcanzó o no alcanzó la cantidad de comida.
        bool definidor = true;
        // cantidad de perros o gatos que no comió
        int total = 0;

        if (r < 0)
        {
            total += r;
        }
        if (h < 0)
        {
            total += h;
        }

        if ((c + total) < 0)
        {
            definidor = false;
            // significa que no alcanza
        }

        if (definidor == true)
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