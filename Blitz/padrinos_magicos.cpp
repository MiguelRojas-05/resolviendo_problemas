#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    getline(cin, s);
    int a = s[0] - 48;
    int b;
    char op;
    for (int i = 2; i < s.length(); i += 4)
    {
        b = s[i + 2] - 48;
        op = s[i];
        switch (op)
        {
        case '+':
            a = a + b;
            break;
        case '-':
            a = a - b;
            break;
        case '*':
            a = a * b;
            break;
        case '/':
            a = a / b;
            break;
        default:
            break;
        }
    }
    cout << a << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        solve();
    }

    return 0;
}