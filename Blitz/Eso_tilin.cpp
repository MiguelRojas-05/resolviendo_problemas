#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
int t; 
cin>>t;
while (t--)
{
    vector<int> v1;
    vector<int>v2;
    int n;
    cin>>n;
for (int i = 0; i < n; i++)
{
    int d; cin>>d;
    v1.push_back(d);
}
for (int i = 0; i < n; i++)
{
    int h; cin>>h;
    v2.push_back(h);
}
bool decisor = true; 
for (int i = 0; i < n; i++)
{
    if (v1[i] <= v2[i])
    {
        decisor = false;
    }
}
if(decisor==true)
{
    cout<<1<<endl;
}else{
    cout<<0<<endl;
}



v1.clear();
v2.clear();
    
}

    return 0;
}