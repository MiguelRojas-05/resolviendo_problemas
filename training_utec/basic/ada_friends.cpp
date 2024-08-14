#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int c;
    cin >> c;
    int p;
    cin >> p;
    map<string, long long> m;
    priority_queue<long long> pq;
    while (c--)
    {
        string vt;
        long long kl;
        cin >> vt >> kl;
        if (m.empty())
        {
            m[vt] = kl;
        }
        else
        {
            if (m.find(vt) != m.end())
            {
                m[vt] += kl;
            }
            else
            {
                m[vt] = kl;
            }
        }
    }
    for (auto &e : m)
    {
        pq.push(e.second);
    }
    long long acum = 0;
    if (p > pq.size())
        p = pq.size();
    for (long long i = 0; i < p; i++)
    {
        acum += pq.top();
        pq.pop();
    }
    cout << acum << "\n";

    return 0;
}