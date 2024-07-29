#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    cin.ignore();

    while (n--)
    {
        string s;
        getline(cin, s);
        vector<int> v;
        string num_str;

        for (char ch : s)
        {
            if (isdigit(ch))
            {
                num_str += ch;
            }
            else if ((ch == ',' || ch == ']') && !num_str.empty())
            {
                v.push_back(stoi(num_str));
                num_str.clear();
            }
        }

        if (!num_str.empty())
        {
            v.push_back(stoi(num_str));
        }
        int contador = 0;
        for (int e : v)
        {
            if (e % 2 == 0)
            {
                contador += e;
            }
        }
        cout << contador << endl;

        contador = 0;
    }

    return 0;
}
