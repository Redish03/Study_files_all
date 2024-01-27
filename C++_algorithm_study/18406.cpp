#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;
    string str = to_string(N);
    int first = 0, second = 0;
    for (int i = 0; i < N / 2; i++)
    {
        string s1 = atoi(str[i]);
        string s2 = atoi(str[N - 1 - i]);
        first += stoi(s1);
        second += stoi(s2);
    }

    if (first == second)
    {
        cout << "LUCKY";
    }
    else
    {
        cout << "READY";
    }
}