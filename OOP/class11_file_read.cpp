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
        cout << "파일 열기 에러" << endl;
        return 1;
    }

    fin >> num;

    while (!fin.eof())
    {
        sum += num;
        fin >> num;
    }

    cout << "합계 : " << sum << endl;

    fin.close();

    return 0;
}