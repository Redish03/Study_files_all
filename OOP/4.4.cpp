#include <iostream>
#include <cstring>
using namespace std;

class CStudent {
private:
    char name[20];
    int number;
    int age;

public:
    CStudent(char *str, int num, int n) {
        strcpy(name, str);
        number = num;
        age = n;
    }
    CStudent()
    {
        strcpy(name, "noname");
        number = 0;
        age = 0;
    }
    void SetName(char *str)
    {
        strcpy(name, str);
    }
    void SetNumber(int num)
    {
        number = num;
    }

    void SetAge(int n)
    {
        age = n;
    }
    void Print()
    {
        cout <<  "�̸�: " << name << endl<< "����: " << age << endl << "�й�: " << number << endl;
    }
};

int main(void)
{
    CStudent St1("ȫ�浿", 11111111, 25);
    CStudent St2;
    St1.Print();
    St2.Print();
    St2.SetName("�̼���");
    St2.SetNumber(22222222);
    St2.SetAge(30);
    St2.Print();
    return 0;
}