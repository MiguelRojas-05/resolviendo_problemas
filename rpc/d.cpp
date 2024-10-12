#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const ll MOD = 1e9+7;
const ll INF = 1e18;

void solve()
{

}
int main()
{
    int n, r;
    cin >> n >> r;
    if(r == 1 || r == 2) {
        cout << n << endl;
        return 0;
    }
    int num_worse = (1<<n);
    int round_win = (num_worse - r + 1) / 2;
    if(round_win >= n) {
        cout << n << endl;
    } else {
        cout << round_win + 1 << endl;
    }
}
