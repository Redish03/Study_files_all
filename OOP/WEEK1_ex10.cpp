#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string name;

    cout << "문자열 입력 : ";
    cin >> name;

    for (int i = 1; i <= name.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << name[j];
        }
        cout << endl;
    }
}