#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;
queue<pair<int, int>> q;
int check[501][501] = {0};

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int boardx, boardy; // x축과 y축
int tablex, tabley;

void checkmap(vector<vector<int>> board, vector<vector<int>> table)
{
    vector<int> temp;
    q.push(make_pair(0, 0));

    while(!q.empty())
    {
        int curx = q.front().first;
        int cury = q.front().second;
        temp.push_back(q.front());

        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = curx + dx[i];
            int ny = cury + dy[i];

            if(check[nx][ny] == 1)
            {
                continue;
            }
            if(nx < 0 || ny < 0 || nx >= boardx || ny >= boardy)
            {
                continue;
            }
              
        }
    }
}

vector<vector<pair<int, int>>> rotation(vector<vector<pair<int, int>>> puzzles)
{
    for (int i = 0; i < puzzles.size(); i++)
    {
        int N = -1;
        for (int j = 0; j < puzzle[i].size(); j++)
        {
            if(puzzles[i][j].first > N)
            {
                N = puzzles[i][j].first;
            }
            if(puzzles[i][j].second > N)
            {
                N = puzzles[i][j].second;
            }
        }
    }
}

int main()
{
    vector<vector<int>> game_board;
    vector<vector<int>> table;

    checkmap(game_board, table);

    int answer = -1;
    return answer;
}

//미완성