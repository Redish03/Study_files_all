#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int num;
    int sum = 0;

    ifstream fin("out.txt");

    if (!fin)
    {
        cout << "���� ���� ����" << endl;
        return 1;
    }

    fin >> num;

    while (!fin.eof())
    {
        sum += num;
        fin >> num;
    }

    cout << "�հ� : " << sum << endl;

    fin.close();

    return 0;
}