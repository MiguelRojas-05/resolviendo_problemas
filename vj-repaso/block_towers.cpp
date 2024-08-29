#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long n; cin>>n;
    vector<long long>v(n);
    for(long long& x:v)cin>>x;
    int p = v[0];
    sort(v.begin()+1, v.end());
    for(long long i = 1; i<n; i++){
        if(p < v[i]){
            p += ((v[i]-p+1)/2);}
        else {
            continue;
        }
    }
    cout<<p<<'\n';
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