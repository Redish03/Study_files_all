#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T)
    {
        string S;
        int a;

        cin >> a >> S;

        for (int i = 0; i < S.size(); i++)
        {
            for (int j = 0; j < a; j++)
            {
                cout << S[i];
            }
        }
        cout << '\n';
        T--;
    }
    
}