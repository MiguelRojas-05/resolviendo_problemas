#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const ll MOD = 1e9+7;
const ll INF = 1e18;

void solve() {
    pair<ll, ll>cab;cin >> cab.first >> cab.second;
    pair<ll,ll>king;cin >> king.first >>king.second;
    pair<ll, ll> queen;cin >> queen.first>>queen.second;
    vector<pair<ll, ll>> a; 
    a.push_back({1,1});
    a.push_back({1,-1});
    a.push_back({-1,-1});
    a.push_back({-1,1});
    set<pair<ll, ll>> kpa;
    set<pair<ll, ll>> qpa;
    for(auto&[k,f] : a){
        kpa.insert({king.first + (cab.first * k) ,king.second + (cab.second * f)});
        kpa.insert({king.first + (cab.second * k), king.second + (cab.first * f)});
        qpa.insert({queen.first + (cab.first * k),queen.second + (cab.second * f)});
        qpa.insert({queen.first + (cab.second * k),queen.second + (cab.first * f)});
    }
    ll cont = 0;
    for(auto& e : kpa){
        if(qpa.find(e)!= qpa.end())cont++;
    }
    // for(auto&[f, s]: kpa)cout << f <<" "<< s <<'\n';
    // cout << "-------------'\n";
    cout << cont <<'\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}