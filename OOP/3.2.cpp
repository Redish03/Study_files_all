#include <iostream>

using namespace std;

 

int main(void)

{
    int var1 = 2, var2 = 3;

    //int &ref1;
    //int &ref2;
    //선언과 동시에 초기화해줘야 한다.

    int &ref1 = var1;
    int &ref2 = var2;
    //Swap문

    int var3 = ref1;

    ref1 = ref2;
    ref2 = var3;

    cout << "var1:" << var1 << endl;
    cout << "var2:" << var2 << endl;
    return 0;

}