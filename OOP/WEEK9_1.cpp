#include <iostream>
#include <string>
using namespace std;

class TV
{
    int size; // 스크린 크기
public:
    TV() { size = 20; }
    TV(int size) { this->size = size; }
    int getSize() { return size; }
};

class WideTV : public TV
{ // TV를 상속받는 WideTV
    bool videoIn;

public:
    WideTV(int size, bool videoIn) : TV(size)
    {
        this->videoIn = videoIn;
    }
    bool getVideoIn() { return videoIn; }
};

class SmartTV : public WideTV
{                  // WideTV를 상속받는 SmartTV
    string ipAddr; // 인터넷 주소
public:
    SmartTV(string ipAddr, int size, bool videoln) : WideTV(size, true)
    {
        this->ipAddr = ipAddr;
    }
    string getIpAddr() { return ipAddr; }
    void SmartInfo()
    {
        cout << "size=" << getSize() << endl;
        cout << "videoIn=" << boolalpha << getVideoIn() << endl;
        cout << "IP=" << getIpAddr() << endl;
    }
};

int main()
{
    // 32 인치 크기에 "192.0.0.1"의 인터넷 주소를 가지는 스마트 TV 객체 생성
    SmartTV htv("192.0.0.1", 32, true);
    htv.SmartInfo();
    cout << "size=" << htv.getSize() << endl;
    cout << "videoIn=" << boolalpha << htv.getVideoIn() << endl;
    cout << "IP=" << htv.getIpAddr() << endl;
}
