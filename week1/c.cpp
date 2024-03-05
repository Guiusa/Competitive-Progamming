#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    string name = "";
    int hs, mn;

    while(cin >> name){
        cin >> hs >> mn;
        if(hs < 10){
            cout << "Abel deve cursar " << name << "\n";
            continue;
        } else if (hs > 10) {
            cout << "Abel deve cancelar " << name << "\n";
            continue;
        } else if (mn > 0) {
            cout << "Abel deve cancelar " << name << "\n";
            continue;
        } 
        cout << "Abel deve cursar " << name << "\n";
    }

    return 0;
}
