#include <iostream>
#include <set>
#include <map>

using namespace std;

int N, M;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> N;
    set<pair<int, int>> problems;
    map<int, int> m;
    // first -> 난이도, second -> 번호
    
    for(int i = 0; i < N; i++) {
        int num, level;
        cin >> num >> level;
        
        problems.insert({level, num});
        m[num] = level;
    }
    
    cin >> M;
    for(int i = 0; i < M; i++) {
        string command;
        cin >> command;
        
        if(command == "add") {
            int num, level;
            cin >> num >> level;
            
            problems.insert({level, num});
            m[num] = level;
        }
        if(command == "recommend") {
            int x;
            cin >> x;
            if(x == 1) {
                auto it = problems.rbegin();
                cout << it->second << '\n';
            }
            else {
                auto it = problems.begin();
                cout << it->second << '\n';
            }
        }
        if(command == "solved") {
            int num;
            cin >> num;
            problems.erase({m[num], num});
        }
    }
}
