#include <iostream>
#include <vector>

using namespace std;

int map[9][9];
int count = 0;
bool check = false;
vector<pair<int, int>> v;
int check[81] = {false};

int dfs(int k, vector<int> a)
{

}

int main()
{
    for (int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            cin >> map[i][j];
            if(map[i][j] == 0)
            {
                v.push_back({j, i});
            }
        }
    }
}