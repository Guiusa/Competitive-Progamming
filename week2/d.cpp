#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct File {
    ll used;
    int type;
    ll size;

    File(ll used, int type, ll size)
        : used(used)
        , type(type)
        , size(size)
    {}
};

struct compare {
    bool operator()(File const& frst, File const& scnd){
        if(frst.used != scnd.used)
            return frst.used > scnd.used;
        if(frst.type != scnd.type)
            return frst.type > scnd.type;
        return frst.size < scnd.size;
    }
};

void print_file(File const& n){
    cout << "Used: " << n.used << '\t';
    cout << "type: " << (
        (n.type == 0) ? "TMP" :
            (n.type == 1) ? "OGG" : "CPP"
    ) << '\t';
    cout << "size: " << n.size << '\n';
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, k;
    cin >> n >> k;
    priority_queue<File, vector<File>, compare> pq;
    int type;
    ll size, used;
    string aux_type;

    for(int i = 0; i<n; i++){
        cin >> used;
        cin >> aux_type;
        type = (aux_type == "TMP") ? 0 : (aux_type == "OGG") ? 1 : 2;
        cin >> size;
        pq.push(File(used, type, size));
    }
    ll summ = 0;
    for(int i = 0; i<k; i++){
        File f = pq.top();
        summ += f.size;
        pq.pop();
    }
    cout << summ << '\n';

    return 0;
}
