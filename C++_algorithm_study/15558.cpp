#include <iostream>
#include <queue>

using namespace std;

int n, k;
vector<string> arr;
queue<pair<int, int>> q;
vector<int> dx = {0, 0, 1, -1};
vector<int> dy = {1, -1};
int second[2][100001] = {0, };
int success = 0;

void bfs(){
    q.push({0, 0});
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(nx < 0 || ny < 0 || nx >= 2 || second[nx][ny] != 0) continue;
            if(ny >= n) {
                success = 1;
                return;
            }
            if(arr[nx][ny] != '1') continue;
            q.push({nx, ny});
            second[nx][ny] = second[x][y] + 1;
        }
        arr[0][second[x][y]] = 0;
        arr[1][second[x][y]] = 0;
    }
}

int main() {
    cin >> n >> k;
    dy.push_back(k);
    dy.push_back(k);
    
    for(int i = 0; i < 2; i++) {
        string str;
        cin >> str;
        arr.push_back(str);
    }
    
    arr[0]+="111";
    arr[1]+="111";
    bfs();
    cout << success;
}
