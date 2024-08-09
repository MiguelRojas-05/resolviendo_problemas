#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
int t; cin>>t;
while (t--)
{
    string a, b;
    cin>>a>>b;
    string fa, sb;
    fa += b[0];
    fa += a[1];
    fa+= a[2];
    sb += a[0];
    sb += b[1];
    sb += b[2];
    cout<<fa<<" "<<sb<<endl;
}

    return 0;
}