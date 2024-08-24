#include <iostream>
#include <map>

using namespace std;

int main() {
    int N, count = 0;
    string comm;
    map<string, bool> m;
    
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> comm;
        if(comm == "ENTER") {
            count += m.size();
            m.clear();
            continue;
        }
        
        if(m[comm] == false) {
            m.insert({comm, true});
        }
    }
    count += m.size();
    cout << count;
}
