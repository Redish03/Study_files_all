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

    ofstream fout("ex6.dat", ios_base::out | ios_base::app | ios_base::binary); // ��� ��Ʈ��

    cout << "��ǥ x, y�Է� : ";
    cin >> Po.x >> Po.y;

    while (Po.x != 0 && Po.y != 0)
    {
        fout.write((char *)&Po, sizeof(Point)); // Point ũ�� 8 ��ŭ ���

        cout << "��ǥ x, y �Է� : ";
        cin >> Po.x >> Po.y;
    }

    fout.close();

    cout << "<< ����� Point ������ >>" << endl;

    ifstream fin("ex6.dat", ios_base::in | ios_base::binary);

    while (fin.read((char *)&Po, sizeof(Point)))
    {
        cout << "(" << Po.x << ", " << Po.y << ")" << endl;
    }

    fin.close();

    return 0;
}