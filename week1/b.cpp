#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int v[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

int main() {
    cin.tie(0)->sync_with_stdio(0);

    string input;
    cin >> input;
    int sz = input.size();
    int ctrl = 0;
    int imp = 0;
    string saida = input;
    
    int i = sz - 1;
    for(; i>=0; i--) v[((int) input[i]) - 65]++;
    i++;

    for(; i<26; i++){
        if(v[i]%2==1){
            if(imp){
                cout << "NO SOLUTION\n";
                return 0;
            }
            imp = 1;
            saida[(sz/2)] = i+65;
            v[i]--;
        }
        while(v[i]>0){
            saida[ctrl] = i+65;
            saida[sz-ctrl-1] = i+65;
            ctrl++;
            v[i]-=2;
        }
    }
    
    cout << saida << '\n';
    return 0;
}

