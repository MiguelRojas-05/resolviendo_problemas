#include <bits/stdc++.h>
#define min(a, b) ((a) > (b) ? (b) : (a))
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min3(a, b, c) (min(min(a, b), c))
#define max3(a, b, c) (max(max(a, b), c))
#define swap(a, b)       \
    {                    \
        auto temp = a;   \
        a = b : b = temp \
    }
using namespace std;

void solve()
{

    vector<long long> vlprecios;
    vector<long long> vlmonedas;
    vector<long long> vlsalida;

    long long tienda;
    long long dias;
    cin >> tienda;
    for (long long k = 0; k < tienda; k++)
    {
        long long element;
        cin >> element;
        vlprecios.push_back(element);
    }
    cin >> dias;
    for (long long k = 0; k < dias; k++)
    {

        long long element;
        cin >> element;
        vlmonedas.push_back(element);
    }
    sort(vlprecios.begin(), vlprecios.end());

    

    for (long long j = 0; j < vlmonedas.size(); j++)
    {
        long long a = 0, b = vlprecios.size() - 1;
        long long count = 0;
        while (a <= b)
        {
            long long k = (a + b) / 2;
            if (vlprecios[k] <= vlmonedas[j])
            {
                count = k + 1;
            }
            if (vlprecios[k] > vlmonedas[j])
                b = k - 1;
            else
                a = k + 1;
        }
        cout << count << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int td = 1;
    // cin>>t;
    while (td--)
    {
        solve();
    }
    return 0;
}