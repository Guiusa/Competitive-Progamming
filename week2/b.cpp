#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct tower_t { 
    int height;
    char dir;
    bool has_brdg;
};

int n(){
    cout << "N\n";
    return 0;
}

void print_tw(tower_t t){
    cout << "h: " << t.height <<"\td: " << t.dir << "\n";
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<tower_t> tws;
    int tn;
    int i = 0;
    int j;
    cin >> tn;
    for(; i<tn; i++){
        tws.push_back(tower_t());
        cin >> tws[i].height >> tws[i].dir;
        tws[i].has_brdg = false;
    }

    for(i = 0; i<tn; i++){
        if(tws[i].has_brdg) continue;
        if(tws[i].dir == 'O') return n();

        for(j=i+1; j<tn; j++){
            if(tws[j].height > tws[i].height) return n();
            if(tws[j].height == tws[i].height){
                if(tws[j].dir == 'L') return n();
                tws[i].has_brdg = true;
                tws[j].has_brdg = true;
                break;
            }
        }
        if(!tws[i].has_brdg) return n();
    }
    cout << "S\n";
    

    return 0;
}
