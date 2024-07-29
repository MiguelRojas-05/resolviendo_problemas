#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int d = 0;
        string s;
        getline(cin, s);
        vector<int> v;
        stringstream ss(s);
        string aux;
        while (getline(ss, aux, ' '))
        {
            v.push_back(stoi(aux));
        }
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = 0; j < v.size(); j++)
            {
                if (v[i] == v[j])
                {
                    if (j < d)
                    {
                        int d = j;
                    }
                }
            }
        }
        if(d==0){
            cout<<"-1"<<endl;
        }else{
            cout<<v[d]<<endl;
        }
    }

    return 0;
}