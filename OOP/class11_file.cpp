#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout("out.txt");
    if (!fout)
    {
        cout << "파일 열기 에러" << endl;
        return 1;
    }

    for (int i = 1; i <= 20; i++)
    {
        if (i % 3 == 0)
        {
            fout << i << " ";
        }
    }
    fout.close();

    return 0;
}