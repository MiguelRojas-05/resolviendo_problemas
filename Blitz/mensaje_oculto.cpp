#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        vector<string> v;
        string s;
        getline(cin, s);
        istringstream iss(s);
        string word;
        while (iss >> word)
        {
            v.push_back(word);
        }
        for (auto e : v)
        {
            for (int i = 0; i < 1; i++)
            {
                cout << e[i];
            }
        }
        cout << endl;
        v.clear();
    }

    return 0;
}