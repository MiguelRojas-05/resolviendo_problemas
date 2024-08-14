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
    long long n;
    cin >> n;
    vector<long long> va;

    for (long long k = 0; k < n; k++)
    {
        long long element;
        cin >> element;

        long long y = 0, count = 0, sum = 0;
        while (sum <= element)
        {
            y++;
            sum = y * (y + 1) / 2;
        }
        cout << y - 1 << endl;
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