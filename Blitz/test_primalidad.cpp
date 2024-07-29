#include <bits/stdc++.h>

using namespace std;

bool solve(long long numero)
{
    // Casos base
    if (numero <= 1)
        return false;
    if (numero == 2)
    {
        return true;
    }
    if (numero % 2 == 0)
        return false;

    for (int i = 3; i <= sqrt(numero); i += 2)
    {
        if (numero % i == 0)
            return false;
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (solve(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}