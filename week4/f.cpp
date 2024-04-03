#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<ll> v ;

    ll n, k ;
    ll soma = 0;
    cin >> n ;
    for(int i = 0; i<n; i++){
        cin >> k ;
        v.push_back(k) ;
    }
    sort(v.begin(), v.end());
    ll m = (n%2 == 0) ? (v[n/2 - 1] + v[n/2])/2 : v[n/2]  ;
    soma = 0;
    for(int i = 0; i<n; i++) soma += abs(v[i] - m) ;

    cout << soma << '\n' ; 

    return 0;
}
