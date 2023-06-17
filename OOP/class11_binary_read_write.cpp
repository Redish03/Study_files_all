#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout("ex5.dat", ios_base::out | ios_base::binary); // 출력 스트림
    double nums[4] = {1.1, 2.2, 3.3, 4.4};
    fout.write((char *)nums, sizeof(nums));
    fout.close();

    ifstream fin("ex5.dat", ios_base::in | ios_base::binary);
    fin.read((char *)nums, sizeof(nums));
    for (int i = 0; i < 4; i++)
    {
        cout << nums[i] << "\t";
    }
    cout << endl;

    cout << "총 바이트 수 : " << fin.gcount() << endl;

    return 0;
}