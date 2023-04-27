#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a;
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        string str;
        int score = 0;
        int count = 0;

        cin >> str;
        for (int j = 0; j < str.size(); j++)
        {
            if(str[j] == 'O')
            {
                count++;
                score += count;
            }
            else
            {
                count = 0;
            }
        }
        cout << score << "\n";
    }
}