#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cin.ignore(); 
    string s;
    while (n--)
    {
        getline(cin, s);
        vector<int> v;
        string num_str;
        for (char ch : s)
        {
            if (isdigit(ch) || ch == '-')
            {
                num_str += ch;
            }
            else if (ch == ',' || ch == ']')
            {
                if (!num_str.empty())
                {
                    v.push_back(stoi(num_str));
                    num_str.clear();
                }
            }
        }
        if (!num_str.empty())
        {
            v.push_back(stoi(num_str));
        }
 int resultado = -1;
        int n = v.size();
        for (int i = 0; i < n; ++i) {
            int count = 0;
            for (int j = 0; j < n; ++j) {
                if (v[j] == v[i]) {
                    count++;
                    if (count == 2) {
                        resultado = v[i];
                        break;
                    }
                }
            }
            if (count == 2) break;
        }

        cout << resultado << endl;
    }
    return 0;
}


