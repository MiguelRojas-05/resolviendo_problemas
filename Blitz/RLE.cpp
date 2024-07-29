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
        string s;
        string final;
        cin >> s;

        int contador = 0;
        int n = s.size();
        if (n == 1)
        {
            cout << s << endl;
        }
        else
        {
            char puntero;
            for (int i = 0; i < n; i++)
            {
                

                if (i == 0)
                {
                    puntero = s[i];
                    contador++;
                    // cout << puntero << " " <<s[i]<<" "<< contador << endl;
                }
                else
                {
                    if (puntero == s[i])
                    {
                        contador++;
                        // cout << puntero << " "<<s[i]<<" " << contador << endl;
                    }
                    else
                    {
                        final += to_string(contador);
                        final += puntero;
                        // cout << puntero << " " << contador << endl;
                        puntero = s[i];
                        contador = 1;
                    }
                }
            }
            // cout<<"---------"<<endl;
            if (contador != 0)
            {
                final += to_string(contador);
                final += s[n - 1];
            }
        
        cout << final << endl;
        }
        s = "";
        final = "";
        contador = 0;
    }

    return 0;
}