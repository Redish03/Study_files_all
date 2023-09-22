#include <iostream>

using namespace std;
// std 라는 namespace 를 전역 namespace로 쓰겠다.

namespace CompanyA
{
  int g_varA;
  void func1()
  {
    cout << "CompanyA::func1" << endl;
    cout << "CompanyA::func2" << endl;
  }
}

namespace CompanyB
{
  using namespace CompanyA; // CompanyA를 CompanyB로 포함
  int g_varB;
  void func1()
  {
    cout << "CompanyB::func1" << endl;
  }
  namespace DeptC // CompanyB 내에 namespace DeptC작성
  {
    void func1()
    {
      cout << "CompanyB::DeptC::func1" << endl;
    }
  }
}

int main()
{
  CompanyB::func1();
  // companyB에 func1실행
  CompanyB::func2();
  // companyB에는 없지만 CompanyA를 포함시켜서 func2 실행
  CompanyB::DeptC::func1();
  // companyB 안에 deptC 의 func1 실행

  return 0;
}