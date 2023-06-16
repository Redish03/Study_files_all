#include <iostream>
#include <cstring>

using namespace std;

class CString
{
private:
    char *pStr;
    int len;

public:
    CString(char *str)
    {
        len = strlen(str);
        pStr = new char[len + 1];
        strcpy(pStr, str);
        cout << "CString 持失切" << endl;
    }
    ~CString()
    {
        delete[] pStr;
        cout << "CString 社瑚切" << endl;
    }
};

class CMyString : public CString
{
private:
    char *pMyStr;
    int MyLen;

public:
    CMyString(char *str1, char *str2) : CString(str1)
    {
        MyLen = strlen(str2);
        pMyStr = new char[MyLen + 1];
        strcpy(pMyStr, str2);
        cout << "CMyString 持失切" << endl;
    }
    ~CMyString()
    {
        delete[] pMyStr;
        cout << "CMyString 社瑚切" << endl;
    }
};

int main()
{
    CString *pStr = new CMyString("CString", "CMyString");
    delete pStr;

    return 0;
}