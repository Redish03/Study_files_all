#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

int main()
{
    vector<vector<int>> v;
    srand(time(NULL));

    for (int i = 0; i < 3; i++)
    {
        vector<int> temp;
        for (int j = 0; j < 5; j++)
        {
            int a = rand() % 10;

            temp.push_back(a);
        }
        v.push_back(temp);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}