#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cin.ignore(); // Para ignorar el salto de línea después de n
    string s1;
    string s2;
    while (n--)
    {
        getline(cin, s1); // Leer la cadena de entrada
        getline(cin, s2);
        set<string> lista1;
        set<string> lista2;
        string banda1;
        string banda2;
        for (char ch : s1)
        {

            if ((ch == ',') || (ch == ']'))
            {
                if (!banda2.empty())
                {
                    lista2.insert(banda2);
                    banda2.clear();
                }
            }
            else if (ch != '[' && ch !=' ')
            {
                banda2 += ch;
            }
        }
        if (!banda2.empty())
        {
            lista2.insert(banda2);
        }

        for (char ch : s2)
        {

            if (ch == ',' || ch == ']')
            {
                if (!banda1.empty())
                {
                    lista1.insert(banda1);
                    banda1.clear();
                }
            }
            else if (ch != '[' && ch != ' ')
            {
                banda1 += ch;
            }
        }
        if (!banda1.empty())
        {
            lista1.insert(banda1);
        }




    }

    return 0;
}
