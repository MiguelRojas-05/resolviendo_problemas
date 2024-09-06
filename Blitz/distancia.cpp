#include <bits/stdc++.h>

using namespace std;

void solve (){
    set<int> s;
    int x,y,z;
    cin>>x>>y>>z;
    s.insert(x);
    s.insert(y);
    s.insert(z);
    cout<<*s.rbegin()-*s.begin()<<'\n';
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
int t ; cin>>t;
while (t--)
{
    solve();
}

    return 0;
}