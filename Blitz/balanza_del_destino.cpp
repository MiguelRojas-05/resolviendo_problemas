#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    if(n%4==0)
    {
        cout<<n+1<<endl;
    }else{
        cout<<n-1<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
int t; cin>>t;
while (t--)
{
    solve();
}

    return 0;
}