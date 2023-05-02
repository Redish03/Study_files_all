#include <cstdio>

using namespace std;

char *endl = "\n";
char *tab = "\t";

class ostream {
    public:
    ostream &operator<<(int val) {
        printf("%d", val);
        return (*this);
    }
    ostream &operator<<(char *str){
        printf("%s", str);
        return (*this);
    }
};

class istream {
    public:
    istream &operator>>(int &val){
        scanf ("%d", &val);
        return (*this);
    }
    istream &operator>>(char *str){
        scanf("%s", str);
        return (*this);
    }
};

ostream cout;
istream cin;

int main(){
    int a = 5;
    char str[] = "C++ Programming";

    cout << a << tab << str << endl;

    cout << "ют╥б : ";
    cin >> a >> str;

    cout << a << tab << str << endl;
    
    return 0;
}
