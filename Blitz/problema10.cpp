#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
int n; cin>>n;
int juan= 0;
int jose =0;
while (n--)
{
    for (int i = 0; i < 5; i++)
    {
        int x; cin>>x;
        jose +=x;
    }
    for (int i = 0; i < 5; i++)
    {
        int y; cin>>y;
        juan +=y;
    }
    if (juan > jose)
    {
        cout<<"Juan"<<endl;
    }    
    else if(jose>juan)
    {
        cout<<"Jose"<<endl;
    }else{
        cout<<"Empate"<<endl;
    }
    jose=0;
    juan=0;
}

    return 0;
}