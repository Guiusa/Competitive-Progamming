#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    int x;
    int iter = 1;
    cin >> n;
    vector<bool> v (n, false);
    v[0] = true;
    

    for(int i = 1; i<=n; i++){
        cin >> x;
        if(!v[x-1]) iter++;
        v[x] = true;
    }
    
    cout << iter << '\n';

    return 0;
}
