#include <iostream>
#include <string>

using namespace std;

class Movie
{
private:
    string title, director;
    double rate;

public:
    Movie(string t, string d, double r) : title(t), director(d), rate(r){};
    Movie()
    {
        title = "";
        director = "";
        rate = 0.0;
    }
    ~Movie()
    {
        cout << "Movie ��ü �Ҹ�" << endl;
    }
    void Print_Movie()
    {
        cout << "��ȭ ���� : " << title << endl;
        cout << "���� �̸� : " << director << endl;
        cout << "���� ���� : " << rate << endl;
    }
};

int main()
{
    cout << "ù ��° ��ȭ #1" << endl;
    Movie mv1{"Interstella", "Christoper Nolan", 9.85};
    mv1.Print_Movie();

    cout << "�� ��° ��ȭ #2" << endl;
    Movie mv2{"Knights of Cydonia", "Muse", 9.85};
    mv2.Print_Movie();
}