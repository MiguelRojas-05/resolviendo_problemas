#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool query_especial(char c){
    if(c != 'B' && c != 'b')return true;
    return false;
}
void solve() {
    string s; cin >> s;
    vector<char> word(s.length());
    stack<int> mi;
    stack<int> ma;
    for(int i = 0; i < s.length(); i++){
        if(query_especial(s[i])){
            if(isupper(s[i])){
                ma.push(i);
                word[i] = s[i];
            }else if (islower(s[i])){
                mi.push(i);
                word[i] = s[i];
            }
        }
            if(s[i] == 'B' && !ma.empty()){
                    int idx = ma.top(); ma.pop();
                    word[idx] = NULL;
            }else if (s[i] == 'b' && !mi.empty()){
                    int idx = mi.top(); mi.pop();
                    word[idx] = NULL;
            }
    }
    for(int i = 0; i < s.length(); i++){
        if(word[i] != NULL) cout << word[i];
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}