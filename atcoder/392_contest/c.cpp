#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef vector<int> vi;


void solve() {
    int N;
    cin >> N;

    vi P(N), Q(N), bib_owner(N + 1), result(N);

    for (int i = 0; i < N; i++) cin >> P[i];

    for (int i = 0; i < N; i++) {
        cin >> Q[i];
        bib_owner[Q[i]] = i;
    }

    for (int i = 1; i <= N; i++) {
        int person = bib_owner[i];      
        int target_person = P[person] - 1; 
        result[i - 1] = Q[target_person];  
    }

    for (int i = 0; i < N; i++) cout << result[i] << " ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}