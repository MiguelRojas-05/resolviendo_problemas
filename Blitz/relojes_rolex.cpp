#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    vector<int> pares;
    vector<int> inpares;
    while (t--)
    {
        int n;
        cin >> n;
        while (n--)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
            {
                pares.push_back(x);
            }
            else
            {
                inpares.push_back(x);
            }
        }
        int d;
        cin >> d;
        if (d == 0)
        {
            for (auto e : pares)
            {
                cout << e << " ";
            }
        }
        else
        {
            for (auto e : inpares)
            {
                cout << e << " ";
            }
        }
        cout << endl;
        pares.clear();
        inpares.clear();
    }
    return 0;
}
//ciclos    condicionales   modulo-hallar pares limpiar estructuras de datos