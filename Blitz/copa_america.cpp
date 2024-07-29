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
        int n, s;
        cin >> n >> s;
        vector<int> goles;
        for (int i = 0; i < n; i++)
        {
            int g;
            cin >> g;
            goles.push_back(g);
        }

        int contador = 0;
        int a = 0;
        int b;
        bool decisor=true;
        for (int i = 0; i < n; i++)
        {

            b = i;

            contador += goles[i];
            if (contador > s && i > 0)
            {
                contador -= goles[a];
                a++;
            }
            if (contador == s)
            {
                cout << a + 1 << " " << b + 1 << endl;
                decisor=false;
                break;
            }
            else if (goles[i] == s)
            {
                cout << i + 1 << " " << i + 1 << endl;
                decisor=false;
                break;
            }
                           
        }
        if(decisor){
            cout<< -1 <<endl;
        }
    }

    return 0;
}