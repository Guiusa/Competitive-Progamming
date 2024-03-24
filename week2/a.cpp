#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    deque<int> lifo;
    deque<int> fifo;
    priority_queue<int> prior;

    int n;
    int interaction;
    int age;
    int popped;
    cin >> n;

    while(n > 0){
        cin >> interaction >> age;
    
        if(! interaction){
            lifo.push_back(age);
            fifo.push_back(age);
            prior.push(age);
        } else{
            popped = lifo.back();
            if(popped == age) lifo.pop_back();
            popped = fifo.front();
            if(popped == age) fifo.pop_front();
              popped = prior.top();
            if(popped == age) prior.pop();
        }

        n--;
    }

    if(!lifo.size()){
        if(!fifo.size() || !prior.size()){
            cout << "ambiguous\n";
            return 0;
        }
        cout << "lifo\n";
    } else if(!fifo.size()){
        if(!prior.size()){
            cout << "ambiguous\n";
            return 0;
        }
        cout << "fifo\n";
    } else if(!prior.size()) {
        cout << "priority\n";
    } else cout << "unknown\n";

    return 0;
}
