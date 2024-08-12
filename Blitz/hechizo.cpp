#include <bits/stdc++.h>

using namespace std;
void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    char arr[n];
    for (int i = 0; i < (n / 2) + 1; i++)
    {
        if (i == (n / 2) + 1)
        {
            arr[i] = s[i];
        }
        else
        {
            char a = s[i];
            int apos = i;
            char b = s[n - (i + 1)];
            int bpos = n - (i + 1);
            if ((a == 'A' || a == 'Z') && (b == 'A' || b == 'Z'))
            {
                arr[apos] = b;
                arr[bpos] = a;
            }
            else
            {
                arr[apos] = a;
                arr[bpos] = b;
            }
        }
    }
    for (auto e : arr)
    {
        cout << e;
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}