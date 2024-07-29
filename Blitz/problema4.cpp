#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
int n; cin>>n;

while (n--)
{
    int count = 0;
    string k;
    cin>>k;
    for (int i = 0; i < k.size(); i++)
    {
        int num = k[i]-'0';
        count += num;
    }
    cout<<count<<endl;
}

    return 0;
}