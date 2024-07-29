#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    vector<int> v;
    set<int> s1;
    cin.ignore();
    while (t--)
    {
        // reigstrar con getline
        string s;
        getline(cin, s);
        // usar stringstream para insertar todos los valores del string s al vector v
        stringstream ss(s);
        int x;
        while (ss >> x)
        {
            v.push_back(x);
        }
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = i + 1; j < v.size(); j++)
            {
                if (v[i] == v[j])
                {
                    s1.insert(j);
                }
            }
        }
        // for(auto elm : s1)
        // {
        //     cout<<elm<<endl;
        // }

        if (!s1.empty())
        {
            cout << v[*s1.begin()] << endl;
        }
        else
        {
            cout << -1 << endl;
        }

        v.clear();
        s1.clear();
    }

    return 0;
}