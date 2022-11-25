#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N, sum = 0;
    string s;
    cin >> N;
    cin >> s;

    for (int i = 1; i <= N; i++)
    {
        sum += s[i];
    }

    cout << sum;
}