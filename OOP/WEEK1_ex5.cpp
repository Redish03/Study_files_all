#include <iostream>

using namespace std;

int main()
{
    char arr[100];
    int count = 0;

    cout << "문자들을 입력하라(100개 미만) : ";
    cin.getline(arr, 100, '\n');
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == 'x')
        {
            count++;
        }
    }
    cout << "x의 개수는 " << count;
}