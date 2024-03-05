#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;
    ll v[n];
    ll maior = 0;
    ll mvs = 0;
    for(int i = 0; i<n; i++){
        cin >> v[i];
        if(v[i] >= maior){
            maior = v[i];
            continue;
        }
        mvs += maior - v[i];
    }
    
    cout << mvs << "\n";

    return 0;
}
