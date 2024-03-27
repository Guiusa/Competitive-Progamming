#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int n ;
    ll total = 0;
    cin >> n;
    for(int i = 0; i<n; i++){
        int val;
        cin >> val;
        total += (val > 10) ? val-10 : 0;     
    }
    cout << total << '\n';
    

    return 0;
}
