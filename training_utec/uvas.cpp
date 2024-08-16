#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int andrew_req, dimitry_req, mich_req, verde_disp, morada_disp, negras_disp;
    cin >> andrew_req >> dimitry_req >> mich_req >> verde_disp >> morada_disp >> negras_disp;
    int disp_total = 0;
 
    if (verde_disp - andrew_req >= 0) disp_total = (verde_disp - andrew_req);
    else
    {
        cout << "NO";
        return 0;
    }
    disp_total += morada_disp;
    if(disp_total - dimitry_req >= 0)disp_total = (disp_total - dimitry_req);
    else{
        cout<<"NO ";
        return 0;
    }
    disp_total += negras_disp;
    if(disp_total - mich_req >= 0)cout<<"YES";
    else cout<<"NO";
    

    return 0;
}