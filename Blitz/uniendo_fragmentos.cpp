#include <bits/stdc++.h>

using namespace std;

string fragmentos (string a, string b)
{
    return a + " " +b;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
int t; cin>>t;
while (t--)
{
    string first, second;
    cin>>first>>second;
    cout<<fragmentos(first, second)<<endl;
}

    return 0;
}