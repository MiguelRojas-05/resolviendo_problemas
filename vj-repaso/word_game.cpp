#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

vector<string>v1;
vector<string>v2;
vector<string>v3;

int n; cin>>n;
while (n--)
{
    int t;
    cin>>t;
    int p1 = 0;
    int p2 = 0;
    int p3 = 0;
    for (int i = 0; i < 3*t; i++)
    {
        string s;
        cin>>s;
        if(v1.size() < t)
        {
            v1.push_back(s);
        }else if(v2.size() < t)
        {
            v2.push_back(s);
        }else
        {
            v3.push_back(s);
        }
    }
    for (int i = 0; i < t; i++)
    {
        if(find(v2.begin(),v2.end(), v1[i])!=v2.end() && find(v3.begin(),v3.end(), v1[i])!=v3.end())
        {
            continue;
        }else if(find(v2.begin(),v2.end(), v1[i])==v2.end() && find(v3.begin(),v3.end(), v1[i])!=v3.end())
        {
            
        }
        
    }
    
    
}


    return 0;
}