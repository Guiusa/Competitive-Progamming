#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    ll x, y, a, b, c, k ;
    cin >> x >> y >> a >> b >> c ;

    multiset<ll> red, green, nocolor ;
    for(int i = 0; i<a; i++){
        cin >> k ;
        red.insert(k) ;
        if(i >= x) red.erase(red.begin()) ;
    }
    for(int i = 0; i<b; i++){
        cin >> k ;
        green.insert(k) ;
        if(i >= y) green.erase(green.begin()) ;
    }
    for(int i = 0; i<c; i++){
        cin >> k;
        nocolor.insert(k) ;
    }

    ll soma = 0;
    while(x > 0 && y > 0){
       ll sc = nocolor.empty() ? 0 : *nocolor.rbegin() ;
       ll maior = max(max(*red.rbegin(), *green.rbegin()), sc) ;

       soma += maior ;

       if(maior == *red.rbegin()){
            red.erase(--red.end()) ;
            x--;
       } else if ( maior == *green.rbegin()) {
            green.erase(--green.end()) ;
            y--;
       } else {
            if(*red.begin() >= *green.begin()){
                green.erase(green.begin()) ;
                y --;
            } else {
                red.erase(red.begin()) ;
                x--;
            }
            nocolor.erase(--nocolor.end()) ;
       }
    }

    while(y >0){
        ll sc = nocolor.empty() ? 0 : *nocolor.rbegin() ;
        if(*green.rbegin() > sc){
            soma += *green.rbegin() ;
            green.erase(--green.end()) ;
        } else {
            green.erase(green.begin()) ;
            soma += *nocolor.rbegin() ;
            nocolor.erase(--nocolor.end()) ;
        }
        y --;
    }

    while(x > 0) {
        ll sc = nocolor.empty() ? 0 : *nocolor.rbegin() ;
        if(*red.rbegin() > sc) {
            soma += *red.rbegin() ;
            red.erase(--red.end());
        } else {
            red.erase(red.begin()) ;
            soma += *nocolor.rbegin();
            nocolor.erase(--nocolor.end()) ;
        }
        x --;
    }

    

    cout << soma << '\n' ;

    return 0;
}
