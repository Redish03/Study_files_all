#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string s;
    cin >> s;
    int count = 0;

    for(int i=0;i<s.length();i++) 
        if(s[i]!=s[i+1]) count++;

    cout << s[s.length() + 1] << '\n';
    if(!count) cout << count;
    else cout << count/2;
}