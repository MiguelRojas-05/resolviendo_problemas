#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    if(n<1199)
    {
        cout<<"Plomo"<<endl;
    }else if(n<1499)
    {
        cout<<"Verde"<<endl;
    }else if(n<1899)
    {
        cout<<"Azul"<<endl;
    }else if(n<2199)
    {
        cout<<"Amarillo"<<endl;
    }else if(n<4001)
    {
        cout<<"Rojo"<<endl;
    }
}
    return 0;
}