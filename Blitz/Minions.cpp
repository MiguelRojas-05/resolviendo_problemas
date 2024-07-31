#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
int t;
cin>>t;
while (t--)
{
    int contador = 0;
    string n;
    cin>>n;
    for (int i = 0; i < n.length(); i++)
    {
        contador = contador + (n[i] - 48);
    }
    cout<<contador<<endl;  
}

    return 0;
}