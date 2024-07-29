#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string s1, s2;
    while (n--)
    {
        cin >> s1 >> s2;
        int t = s1.size();
        int d = 0;
        for (int i = 0; i < t; i++)
        {
            for (int j = 0; j < t; j++)
            {
                if(s1[i]==s2[j])
                {
                    d++;
                    break;
                }
            }
        }
        if(t==d)
        {
            cout<<"SI"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}