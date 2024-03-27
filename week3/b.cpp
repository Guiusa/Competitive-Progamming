#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> v;
vector<bool> b (20);
int n;
int summ;

void gen(int k){
    if(k == n){
        int sp1 = 0;
        int sp2 = 0;
        for(int i = 0; i<n; i++){
            sp1 += (b[i]) ? v[i] : 0;
            sp2 += (b[i]) ? 0 : v[i];
        }
        if (abs(sp2-sp1) < summ) summ = abs(sp2-sp1);
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
        summ+=k;
        v.push_back(k);
        b[i] = 0;
    }

    gen(0);

    cout << summ << '\n';

    return 0;
}
