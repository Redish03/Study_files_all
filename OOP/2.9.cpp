#include <iostream>

using namespace std;

int main(void)
{
    int sum = 0;

    for (int i = 0; i < 100; i++)
        sum += (i + 1);

    cout << "합계:" << sum << endl;
    return 0;
}