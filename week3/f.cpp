#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> v;
int n;
vector<ll> r; // razao, achados, indice

int e_igual(){
    for(int i = 0; i<n-2; i++){
        if(r[i] == r[i+1]) continue;
        if(i == 0){
            if(r[0] != r[n-2]){
                r[0] = r[1];
                return 0;
            }
            return 1;
        }
        return (r[i] != r[0]) ? i : i+1;
    }
    return -1;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    for(int i = 0; i<n; i++){
        ll vl;
        cin >> vl;
        v.push_back(vl);
    }
    sort(v.begin(), v.end());

    for(int i = 0; i<n-1; i++){
        ll k;
        k = v[i+1]/v[i];
        r.push_back(k);
    }

    int rt = e_igual();
    if(rt == -1){
        ll v1, v2;
        v2= v[n-1]*r[0];
        v1 = (v[0]%r[0] == 0) ? v[0]/r[0] : v2;
        if(v1 != v2){
            cout << v1 << '\n';
        }
        cout << v2 << '\n';
        return 0;
    }
    cout << v[rt] * r[0] << '\n';


    return 0;
}
