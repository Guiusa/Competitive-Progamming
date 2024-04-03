#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct compare {
    bool operator() (string const& s1, string const& s2){
        return s1+s2 > s2+s1 ;
    }
};

int main() {
    cin.tie(0)->sync_with_stdio(0);

    priority_queue <string, vector<string>, compare> vs ;
    string s ;
    int n ;
    cin >> n ;
    for(int i = 0; i<n; i++){
        cin >> s;
        vs.push(s);
    }
    
    for(int i = 0; i<n; i++){
        s = vs.top() ;
        cout << s ;
        vs.pop() ;
    }
    cout << '\n' ;
    

    return 0;
}
