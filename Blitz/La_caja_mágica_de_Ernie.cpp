#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    vector<int> v;
    while (t--)
    {
        int n;
        cin >> n;
        while (n--)
        {
            int d;
            cin >> d;
            if (d == 0)
            {
                int x;
                cin >> x;
                v.push_back(x);
            }
            else if (d == 1)
            {
                int y;
                cin >> y;
                cout << v[y] << endl;
            }
            else if (d == 2)
            {
                v.pop_back();
            }
                }
        v.clear();
    }

    return 0;
}