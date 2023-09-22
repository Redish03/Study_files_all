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

    void setHowl(const string &roar)
    {
        howl = roar;
    }
    string getHowl()
    {
        return howl;
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

    Tiger tiger[3] = {Tiger("alpha", 4, 190, "hh"), Tiger("Beta", 10, 163, "ksjdbjv"), Tiger("gamma", 7, 200, "hllw")};

    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        cout << "Name : " << tiger[i].getName() << endl;
        cout << "age : " << tiger[i].getAge() << endl;
        cout << "weight : " << tiger[i].getWeight() << endl;
        cout << "howl : " << tiger[i].getHowl() << endl;
    }

    return 0;
}
