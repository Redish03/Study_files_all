#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<pair<int, int>> ladder;
vector<pair<int, int>> snake;

void bfs() {
    
}

int main()
{
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        ladder.push_back(make_pair(x, y));
    }
    for (int j = 0; j < M; j++) {
        int x, y;
        cin >> x >> y;
        snake.push_back(make_pair(x, y));
    }

}