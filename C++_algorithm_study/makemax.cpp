#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

string solution(string number, int k)
{   
    int count = stoi(number);
    vector<int> v;
    stack<int> st;
    
    while(count != 0)
    {
        int a = count % 10;
        v.push_back(a);
        count = count / 10;
    }
    
    int max_num = v[0];
    st.push(max_num);
    
    for(int i = 0; i < v.size(); i++)
    {
        if(k == 0) break;
        
        if(st.top() < v[i + 1])
        {
            st.pop();
            st.push(v[i + 1]);
        }
    }

    

    string answer = "";
    return answer;
}

int main()
{
    solution("45258", 2);
}