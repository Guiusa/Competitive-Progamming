#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<bool> s (15); 
vector<ll> p;
ll a, b, n, total;

int parityc(){
    int r = 0;
    for(int i = 0; i<n; i++) r += s[i];
    return r%2;
}

void gen(int k){
    if(k == n){
        ll m = 1;
        for(int i = 0; i<n; i++) if(s[i]) m = m * p[i]; 
        if(m==1) return;

        ll multiples = ((b/m) - (a-1)/m);
        total += (parityc()) ? multiples : -multiples;
        
        return;
    }
    s[k] = 1;
    gen(k+1);
    s[k] = 0;
    gen(k+1);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    total = 0;
    cin >> a >> b >> n;
    for(int i = 0; i<n; i++){
        ll v;
        cin >> v;
        p.push_back(v);
        s.push_back(0);
    }

    gen(0);

    cout << (b-a+1)-total << '\n';

    return 0;
}
