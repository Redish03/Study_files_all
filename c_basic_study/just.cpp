#include <iostream>
#include <string>
#include <vector>

using namespace std;

string i_will_do = "sleep";

string what_i_do()
{
    string str = "study";
    return str;
}

int main()
{
    while(true)
    {
        cout << i_will_do;
        cout << what_i_do();
    }
}


