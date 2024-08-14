#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==0 || j ==0){
                arr[i][j]=1;
            }
        }
    }
    for(int k=1; k<n ; k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

solve();
    return 0;
}