#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll oo = 1987654321987654321;

vector<ll> v;
vector<bool> b (20);
int n;
ll big = oo;

void gen(int k){
    if(k == n-1){
        int total = 0;
        int itvl = v[0];
        for(int i = 1; i<n; i++){
            if(b[i-1]){
                total = total ^ itvl;
                itvl = v[i];
            } else {
                itvl |= v[i];
            }
        }
        total = total ^ itvl;
    
        if (total < big) big = total;
        return;
    }

    b[k] = 0;
    gen(k+1);
    b[k] = 1;
    gen(k+1);
};

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int k;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> k;
        v.push_back(k);
        b[i] = 0;
    }

    gen(0);

    cout << big << '\n';

    return 0;
}
