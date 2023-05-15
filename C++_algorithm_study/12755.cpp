#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int count = 0;
    vector<int> v;
    string check;

    for (int i = 1; i <= N; i++)
    {
        check = i;
        count++;
        for (int j = 0; j < check.length(); j++)
        {
            int a = check[j];
            v.push_back(a);
        }
    }
    cout << v[N - 1];
    return 0;
}