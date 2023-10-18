#include <iostream>

using namespace std;

class Person
{
    string name;
    string tel;

public:
    Person(string name_, string tel_)
    {
        name = name_;
        tel = tel_;
    }
    Person(){};

    string getName()
    {
        return name;
    }
    string getTel()
    {
        return tel;
    }
    void set(string name, string tel)
    {
        this->name = name;
        this->tel = tel;
    }
};

int main()
{
    Person person[3];
    string name, tel;
    for (int i = 0; i < 3; i++)
    {
        cout << "person" << i << ">>";
        cin >> name >> tel;

        person[i].set(name, tel);
    }

    cout << "You can find person" << endl
         << "Enter name : ";

    cin >> name;

    for (int i = 0; i < 3; i++)
    {
        if (person[i].getName() == name)
        {
            cout << person[i].getTel() << endl;
            break;
        }
    }
}