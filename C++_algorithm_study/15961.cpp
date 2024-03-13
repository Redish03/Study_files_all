#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int N, d, k, c;
vector<int> v;
bool sushi_exist = false;
queue<int> location;

int main()
{
    cin >> N >> d >> k >> c;
    int a;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        v.push_back(a);
        if (a == c)
        {
            sushi_exist = true;
            location.push_back(i);
        }
    }

    if(sushi_exist)
    {
        while(!location.empty())
        {
            int x = location.front();
            location.pop()
            
            ;
            for (int i = 0; i < )
        }
    }
    
}