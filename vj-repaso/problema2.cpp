#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
int n,t; cin>>n;
while (n--)
{
    cin>>t;
    int r;
    vector<int>v;
    vector<int>e;
    for (int i = 0; i < t; i++)    
    {
        int x; cin>>x;
        v.push_back(x);
    }
    for (int i = t; i > 0; i--)
    {
        if(e.empty())
        {
           e.push_back(v[i]);
        }else
        {
            auto it = find(e.begin(),e.end(),v[i]);
            if(it == e.end())
            {
                e.push_back(v[i]);
            }else{
                int r;
                r = t - e.size();
                cout<<t<<" - "<<e.size()<<" = "<<r<<endl;
                break;
            }
        }
    }
      
}

    return 0;
}