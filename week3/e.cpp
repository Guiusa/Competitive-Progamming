#include <bits/stdc++.h>
using namespace std;
using ll = long long;
//ab + c = (f+e)*d

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, val;
    cin >> n;
    vector <int> v;
    map<int, int> l1, l2;

    for(int i = 0; i<n; i++){
        cin >> val;
        v.push_back(val);
    }

    for(int a : v) for(int b : v) for(int c : v){
        l1[a*b+c]++;
        if(!c) continue;
        l2[(a+b)*c]++;
    }

    int total = 0;
    for(auto [k, v] : l1) total += v * l2[k];
    cout << total << '\n';

    return 0;
}
