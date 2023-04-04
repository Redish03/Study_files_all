#include <iostream>
#include <vector>
#define MAX 1000000000
using namespace std;

vector<int> arr;

void node(int l, int r)
{
    int ans = l;
    int sub = l++;
    while(arr[++sub] < arr[ans])
        ;
    if(l <= sub - 1)
        node(l, sub - 1);
    if(sub <= r)
        node(sub, r);
    cout << arr[ans] << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int input;
    while(cin >> input)
    {
        arr.push_back(input);
    }
    arr.push_back(MAX);
}