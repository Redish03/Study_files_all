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
        cout << "Movie 객체 소멸" << endl;
    }
    void Print_Movie()
    {
        cout << "영화 제목 : " << title << endl;
        cout << "감독 이름 : " << director << endl;
        cout << "총합 평점 : " << rate << endl;
    }
};

int main()
{
    cout << "첫 번째 영화 #1" << endl;
    Movie mv1{"Interstella", "Christoper Nolan", 9.85};
    mv1.Print_Movie();

    cout << "두 번째 영화 #2" << endl;
    Movie mv2{"Knights of Cydonia", "Muse", 9.85};
    mv2.Print_Movie();
}