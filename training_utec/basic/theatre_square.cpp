#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, m, a;
    cin >> n >> m >> a;
    long long x = 0;
    long long y = 0;

    if (n % a == 0)
    {
        x = n / a;
    }
    else
    {
        x = (n / a) + 1;
    }

    if (m % a == 0)
    {
        y = m / a;
    }
    else
    {
        y = m / a + 1;
    }
    cout << x * y;

    return 0;
}