#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> s (12);
vector<bool> chosen (13);
vector<vector<int>> restrict; 
int n, t;

void gen(int k){
    if (k == n){
        for(int i = 0; i < n; i++) cout << s[i] << ' ';
        cout << '\n';
        return;
    }
    
    for(int i = 1; i<=n; i++)
        if(!chosen[i]){
            for(int l = 0; l<n; l++){
                if(restrict[i-1][l] && chosen[l+1]) return;
            }

            chosen[i] = 1; s[k] = i; gen(k+1); chosen[i] = 0;
        }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> n;
    for(int i = 0; i<n; i++){
        vector<int> v1;
        for(int j = 0; j<n; j++) v1.push_back(0);
        restrict.push_back(v1);
    }

    int k;
    cin >> k;
    for(; k>0; k--){
        int i, j;
        cin >> i >> j;
        restrict[i-1][j-1] = 1;
    }
    gen(0);

    return 0;
}
