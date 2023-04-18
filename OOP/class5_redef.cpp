#include <iostream>
#include <cstring>

using namespace std;

class CString{
    private:
        int len;
        char *str;

    public : 
        CString(const CString &string)  // 복사 생성자
        {
            len = string.len;
            str = new char[len + 1];
            strcpy(str, string.str);    // copy a string
        }
        CString(char *s = "Unknown")    // 일반 생성자
        {
            len = strlen(s);
            str = new char[len + 1];
            strcpy(str, s);
        }
        ~CString() { delete[] str; }
        void Print() { cout << str << endl; }
};

// 값에 의한 전달, 복사 생성
void ShowString(CString str)
{
    str.Print();
}

int main()
{
    CString str1 = "C++ Programming";
    CString str2 = str1;   // 복사 생성

    str1.Print();
    ShowString(str2);

    return 0;
}