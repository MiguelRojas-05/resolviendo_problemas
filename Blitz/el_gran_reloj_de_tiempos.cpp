#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
     cin>>n;
     vector<int>v(n);
     vector<int>resultado;
     for (int i = 0; i < n; i++)
     {
        cin>>v[i];
     }
     int r; cin>>r;
     for (int i = n-r; i < n; i++)
     {
        resultado.push_back(v[i]);
     }
     for (int i = 0; i < n-r; i++)
     {
        resultado.push_back(v[i]);
     }
     for(int op : resultado)
     {
        cout<<op<<" ";
     }
     cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
int t;
cin>>t;
while (t--)
{
    solve();
}

    return 0;
}