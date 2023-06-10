#include <iostream>

using namespace std;

class CArray {
    private:
        int arr[5];

    public:
        CArray() {
            for (int i = 0; i < 5; i++)
            {
                arr[i] = i;
            }
        }
        CArray &operator+() {
            int copy[5];
            for (int i = 0; i < 5; i++)
            {
                copy[i] = arr[i];
            }

            for (int i = 0; i < 5; i++)
            {
                if(i == 0)
                    arr[i] = copy[4];
                else
                    arr[i] = copy[i - 1];
            }
            return *this;
        }

        CArray &operator-() {
            int copy[5];
            for (int i = 0; i < 5; i++) {
                copy[i] = arr[i];
            }
            for (int i = 0; i < 5; i++)
            {
                if(i != 4) {
                    arr[i] = copy[i + 1];
                }
                else {
                    arr[i] = copy[0];
                }
            }
            return *this;
        }

        void Print()
        {
            for (int i = 0; i < 5; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int main() {
    CArray ary1;
    ary1.Print();

    CArray ary2 = +ary1;
    ary1.Print();
    ary2.Print();
    -(-ary1);
    ary1.Print();

    return 0;
}