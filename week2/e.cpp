#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t, l, n, d;
    int p1, p2, maior, menor;
    
    cin >> t;
    for(int i = 0; i<t; i++){
        cin >> l >> n;
        set<int> o;
        for(int j = 0; j<n; j++){
            cin >> d;
            o.insert(d);
        }
        auto b = o.begin();
        auto e = --o.end();
        p1 = *b;
        p2 = *e;
        maior = ((l - p1) > p2) ? (l - p1) : p2;

        menor = 0;
        while(!o.empty()){
            p1 = *b;
            b = o.erase(b);
            int menorL =  (p1 < (l-p1)) ? p1 : l-p1;
            menor = menorL > menor ? menorL : menor;
        }

        cout << menor << ' ' << maior << '\n';
    }
    

    return 0;
}
