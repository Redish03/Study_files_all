#include <iostream>
#include <fstream>

using namespace std;

struct Point
{
    int x, y;
};

int main()
{
    Point Po = {1, 1};
    fstream fio("ex7.dat", ios_base::in | ios_base::out | ios_base::trunc | ios_base::binary);
    for (int i = 0; i < 5; i++)
    {
        fio.write((char *)&Po, sizeof(Point));
    }

    fio.seekp(2 * sizeof(Point), ios::beg); // 출력 포인터를 3번째 원소로 이동
    Po.x = 2;
    Po.y = 2;
    fio.write((char *)&Po, sizeof(Point));

    fio.seekg(0, ios::beg); // 입력 포인터를 첫번째 원소로 이동
    while (fio.read((char *)&Po, sizeof(Point)))
    {
        cout << "(" << Po.x << ", " << Po.y << ")" << endl;
    }
    fio.close();

    return 0;
}