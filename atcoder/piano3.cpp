#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    vector<int> left;
    vector<int> right;
    while (t--)
    {
        int pvt;
        cin >> pvt;
        char df;
        cin >> df;
        if (df == 'L')
            left.push_back(pvt);
        else
            right.push_back(pvt);
    }
    int contador = 0;
    if (!left.empty())
    {
        for (int i = 0; i < left.size() - 1; i++)
        {
            int a = abs(left[i] - left[i + 1]);
            contador += a;
        }
    }
    if (!right.empty())
    {
        for (int i = 0; i < right.size() - 1; i++)
        {
            int b = abs(right[i] - right[i + 1]);
            contador += b;
        }
    }
    cout << contador;

    return 0;
}