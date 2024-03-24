#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    list<int> l1;
    auto head = l1.begin();
    int n;
    cin >> n;
    int mod1, mod2;
    char op;
    for(int i = 0; i<n; i++){
        cin >> op;
        switch(op){
            case 'm':
                cin >> mod1;
                advance(head, mod1);
                break;
                
            case 'i':
                cin >> mod1 >> mod2;
                for(int j = 0; j<mod1; j++){
                    l1.insert(head, mod2);
                    advance(head, -1);
                }
                break;

            case 'd':
                head = l1.erase(head);
                break; 

            case 'q':
                cout << *head << '\n';

            default:
                break;
        }
    }
    return 0;
}
