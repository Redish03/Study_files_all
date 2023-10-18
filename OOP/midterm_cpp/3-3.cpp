#include <iostream>

using namespace std;

class Sample
{
    int *p;
    int size;

public:
    Sample(int n)
    {
        size = n;
        p = new int[n];
    }
    void read()
    {
        for (int i = 0; i < size; i++)
        {
            cin >> p[i];
        }
    }
    void write()
    {
        for (int i = 0; i < size; i++)
        {
            cout << p[i] << " ";
        }
        cout << endl;
    }
    int big()
    {
        int max = -1;
        for (int i = 0; i < size; i++)
        {
            if (p[i] > max)
                max = p[i];
        }
        return max;
    }
    ~Sample(){};
};

int main()
{
    Sample s(10);
    s.read();
    s.write();
    cout << "Most bing int" << s.big() << endl;
}