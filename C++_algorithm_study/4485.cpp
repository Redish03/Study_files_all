#include <iostream>
#include <queue>
#define INF 987654321

using namespace std;

int N;
queue<pair<int, int>> q;
int arr[130][130];
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };
int visited[130][130];

void bfs() {
    visited[0][0] = arr[0][0];
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
            
            if(visited[nx][ny] > visited[x][y] + arr[nx][ny]) {
                visited[nx][ny] = visited[x][y] + arr[nx][ny];
            
                q.push({nx, ny});
            }
        }
    }
}

void init() {
    for(int i = 0; i <= N; i++) {
        for(int j = 0; j <= N; j++) {
            visited[i][j] = INF;
        }
    }
    q = queue<pair<int, int>>();
    q.push({0, 0});
}

int main() {
    cin >> N; 
    int cnt = 1;
    int answer = 0;
    
    while(N != 0) {
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < N; j++) {
                cin >> arr[i][j];
            }
        }
        init();
        bfs();
        answer = visited[N - 1][N - 1];
        cout << "Problem " << cnt << ": " << answer << '\n';
        cnt++;
        
        cin >> N;
    }
}
