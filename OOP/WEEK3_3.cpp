// 객체 배열 초기화
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
    Tiger(const string &tname, int tage, int tweight)
    {
        int len = tname.length() + 1;
        name = tname;
        age = tage;
        weight = tweight;
        cout << "Tiger object constructor" << endl;
    }
    ~Tiger()
    {
        cout << "Tiger object destructor" << endl;
    }

    string getName()
    {
        return name;
    }
    void setName(string tname)
    {
        name = tname;
    }
    int getAge()
    {
        return age;
    }
    void setAge(int tage)
    {
        age = tage;
    }
    int getWeight()
    {
        return weight;
    }
    void setWeight(int tw)
    {
        weight = tw;
    }
};

int main()
{
    Tiger *tiger = new Tiger("dingo", 3, 140);
    cout << "name : " << tiger->getName() << endl;
    cout << "age : " << tiger->getAge() << endl;
    cout << "weight : " << tiger->getWeight() << endl
         << endl;

    tiger->setName("cola");
    tiger->setAge(7);
    tiger->setWeight(170);
    cout << "name : " << tiger->getName() << endl;
    cout << "age : " << tiger->getAge() << endl;
    cout << "weight : " << tiger->getWeight() << endl;

    delete tiger;
    return 0;
}