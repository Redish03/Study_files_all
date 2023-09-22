// 객체 포인터 동적 할당
#include <iostream>
#include <cstring>

using namespace std;

class Tiger
{
private:
    int age, weight;
    string name;
    string howl;

public:
    Tiger()
    {
        int len = name.length() + 1;
        name = "";
        age = 0;
        weight = 0;
        cout << "Tiger Object base constructor" << endl;
    }
    Tiger(string tname, int tage, int tweight, const string &roar)
    {
        int len = tname.length() + 1;
        name = tname;
        age = tage;
        weight = tweight;
        howl = roar;
        cout << "Tiger object constructor" << endl;
    }
    ~Tiger()
    {
        cout << "Tiger object destructor" << endl;
    }

    void setTigers(const string &tname, int tage, int tweight, const string &thowl)
    {
        name = tname;
        age = tage;
        weight = tweight;
        howl = thowl;
    }
    void showInfo()
    {
        cout << endl;
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "weight : " << weight << endl;
        cout << "howl : " << howl << endl;
        cout << endl;
    }
    string getHowl()
    {
        return howl;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    int getWeight()
    {
        return weight;
    }
    // void setWeight(int tw)
    // {
    //     weight = tw;
    // }
    // void setName(string tname)
    // {
    //     name = tname;
    // }
    // void setAge(int tage)
    // {
    //     age = tage;
    // }
    // void setHowl(const string &roar)
    // {
    //     howl = roar;
    // }
};

int main()
{
    Tiger *tiger[3];
    string strname;
    int age;
    int weight;
    string howl;

    for (int i = 0; i < 3; i++)
    {
        cout << "get Name : ";
        cin >> strname;
        cout << "get age : ";
        cin >> age;
        cout << "get weight : ";
        cin >> weight;
        cout << "get howl : ";
        cin >> howl;
        tiger[i] = new Tiger(strname, age, weight, howl);
    }

    for (int i = 0; i < 3; i++)
    {
        tiger[i]->showInfo();
        delete tiger[i];
    }

    return 0;
}
