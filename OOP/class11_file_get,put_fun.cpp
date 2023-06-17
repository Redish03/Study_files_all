#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("in4.txt");
    ofstream fout("out4.txt");

    if (!fin || !fout)
    {
        cout << "파일 열기 에러" << endl;
        return 1;
    }

    char ch = fin.get();
    while (!fin.eof())
    {
        fout.put(ch);
        fin.get(ch);
    }

    fin.close();
    fout.close();

    return 0;
}