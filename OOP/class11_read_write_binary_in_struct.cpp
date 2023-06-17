#include <iostream>
#include <fstream>

using namespace std;

struct Point
{
    int x, y;
};

int main()
{
    Point Po;

    ofstream fout("ex6.dat", ios_base::out | ios_base::app | ios_base::binary); // 출력 스트림

    cout << "좌표 x, y입력 : ";
    cin >> Po.x >> Po.y;

    while (Po.x != 0 && Po.y != 0)
    {
        fout.write((char *)&Po, sizeof(Point)); // Point 크기 8 만큼 출력

        cout << "좌표 x, y 입력 : ";
        cin >> Po.x >> Po.y;
    }

    fout.close();

    cout << "<< 저장된 Point 데이터 >>" << endl;

    ifstream fin("ex6.dat", ios_base::in | ios_base::binary);

    while (fin.read((char *)&Po, sizeof(Point)))
    {
        cout << "(" << Po.x << ", " << Po.y << ")" << endl;
    }

    fin.close();

    return 0;
}