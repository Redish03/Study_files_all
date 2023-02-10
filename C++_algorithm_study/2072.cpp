#include <iostream>
#include <vector>

using namespace std;

int map[21][21];
bool check[21][21] = {
    false,
};
int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};
int nx, ny;

void func(int y, int x)
{
    check[y][x] = true;
    for (int i = 0; i < 4; i++)
    {
        ny = y + dy[i];
        nx = x + dx[i];

        if(y == ny)
        {
            
        }
    }
}

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 20; i++)
    {
        for (int k = 0; k < 20; k++)
        {
            if((arr[i][j] == 1||arr[i][j] == 2) && !check[i][j]))
            {
                func(i, j);
            }
        }
    }
}