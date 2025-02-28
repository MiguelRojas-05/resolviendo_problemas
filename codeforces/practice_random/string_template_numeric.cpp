#include <bits/stdc++.h>

using namespace std;

// Declaraciones globales
int na;
vector<int> a;
string s;

void comp_ins() {
    map<int, char> mp;
    map<char, int> rev_mp;

    for (int i = 0; i < na; i++) { 
        if (mp.count(a[i])) {
            if (mp[a[i]] != s[i]) {
                cout << "NO\n";
                return;
            }
        } else {
            mp[a[i]] = s[i];
        }

        if (rev_mp.count(s[i])) {
            if (rev_mp[s[i]] != a[i]) {
                cout << "NO\n";
                return;
            }
        } else {
            rev_mp[s[i]] = a[i];
        }
    }
    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        
        cin >> na;
        a.resize(na);
        for (int& x : a) cin >> x;

        
        int cc;
        cin >> cc;

        while (cc--) {
            cin >> s;

        
            if (s.length() != na) {
                cout << "NO\n";
            } else {
                comp_ins();
            }
        }
    }

    return 0;
}
