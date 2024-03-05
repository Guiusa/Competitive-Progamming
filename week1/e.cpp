#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c;
    cin >> a >> b >> c;
    if(b <= 1){
        cout << (a - b - c) << "\n";
        return 0;
    }

    cout << (a - (b*c)) << "\n";

    return 0;
}
