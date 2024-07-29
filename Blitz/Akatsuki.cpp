#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    int n;
    vector<int> v;
    while (t--)
    {
        cin >> n;
        int element;
        while (n--)
        {
            cin >> element;
            v.push_back(element);
        }
        sort(v.begin(), v.end());
        cout<<*v.rbegin() - *v.begin()<<endl;
        v.clear();
    }

    return 0;
}