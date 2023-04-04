#include <iostream>

using namespace std;

int main(){
    int var1 = 3;
    int var2 = 5;
    int &ref = var1;

    ref = 7;
    cout << var1 << "\n" << var2 << "\n" << ref ;
    
    ref = var2;
    cout << var1 << "\n" << var2 << "\n" << ref ;
}