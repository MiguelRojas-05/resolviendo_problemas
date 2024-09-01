#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    cin >> a >> b;
    int r = abs(a - b);
    int obj;
    if (r > 0)
    {
        if (r % 2 == 0)
            obj = 3;
        else
            obj = 2;
    }
    else
    {
        obj = 1;
    }
    cout << obj;
    return 0;
}