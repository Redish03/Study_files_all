#include <iostream>

using namespace std;

int arr[8];

int ascending()
{
    int check = 0;
    for (int i = 0; i < 8; i++)
    {
        if(i + 1 == arr[i])
            check = 1;
        else
        {
            check = 0;
            return check;
        }
    }
    return check;
}

int descending()
{
    int check= 0;
    int flg = 8;
    for (int i = 0; i < 8; i++)
    {
        if(flg == arr[i]){
            check = 1;
            flg--;
        }
        else
        {
            check = 0;
            return check;
        }
    }
    return check;
}

int main()
{
    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }

    if (ascending())
        cout << "ascending";
    else if (descending())
        cout << "descending";
    else
        cout << "mixed";

    return 0;
}