#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n ;

    for(int i = 0; i<n; i++){
        int lucro = 0;
        int p, h, f, p1, p2 ;
        cin >> p >> h >> f >> p1 >> p2 ;

        if( p1 < p2 ){
            while(p > 1 && f > 0){
                lucro += p2 ;
                p-=2;
                f--;
            }
            if(p > 1) lucro += p1 * min(p/2, h) ;
        } else {
            while(p > 1 && h > 0){
                lucro += p1 ;
                p-=2;
                h--;
            }
            if(p > 1) lucro += p2 * min(p/2, f) ;

        }

        cout << lucro << '\n' ;
    }

    return 0;
}
