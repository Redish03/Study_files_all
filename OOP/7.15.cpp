#include <iostream>
#include <cstring>

using namespace std;

class CString
{
private:
    char *str;

public:
    CString(char *string = "Unknown")

    {

        int len = strlen(string);

        str = new char[len + 1];

        strcpy(str, string);
    }

    CString(const CString &copy) // 복사 생성자

    {

        int len = strlen(copy.str);

        str = new char[len + 1];

        strcpy(str, copy.str);
    }

    ~CString()

    {

        delete[] str;
    }

    CString &operator=(const CString &copy)

    {

        delete[] str;

        str = new char[strlen(copy.str) + 1];

        strcpy(str, copy.str);

        return *this;
    }

    CString operator+(const CString &copy)

    {

        int len = strlen(str) + strlen(copy.str) + 1;

        char *string = new char[len];

        strcpy(string, str);

        strcat(string, copy.str);

        CString word(string);

        delete[] string;

        return word;
    }

    CString &operator+=(const CString &copy)

    {

        int len = strlen(str) + strlen(copy.str) + 1;

        char *string = new char[len];

        strcpy(string, str);

        delete[] str;

        strcat(string, copy.str);

        str = string;

        return *this;
    }

    bool operator==(const CString &copy)

    {

        return strcmp(str, copy.str);
    }

    friend ostream &operator<<(ostream &out, const CString &string);

    friend istream &operator>>(istream &in, CString &string);
};

ostream &operator<<(ostream &out, const CString &string)

{

    out << string.str << endl;

    return out;
}

istream &operator>>(istream &in, CString &string)

{

    char word[50];

    in >> word;

    string = CString(word);

    return in;
}

int main(void)

{

    CString str1 = "Good ";

    CString str2 = "morning";

    CString str3;

    str3 = str1 + str2;

    cout << str1 << endl;

    cout << str2 << endl;

    cout << str3 << endl;

    str1 += str2;

    if (str1 == str3)

    {

        cout << "equal!" << endl;
    }

    CString str4;

    cout << "문자열 입력: ";

    cin >> str4;

    cout << "입력한 문자열: " << str4 << endl;

    return 0;
}