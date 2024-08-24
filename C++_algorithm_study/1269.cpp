#include<iostream>
#include <map>

using namespace std;

int main()
{
    int n, M; cin >> n >> M;
    
    map<int, bool> m;
    
    for(int i = 0; i < n + M; i++) {
        int num;
        cin >> num;
        
        if(m[num] == true) {
            m.erase(num);
        }
        else {
            m[num] = true;
        }
    }
    cout << m.size();
}
