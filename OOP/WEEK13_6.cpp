#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(string a, string b)
{
    return a.length() < b.length();
}

int main()
{
    int N;
    string str;

    cout << "Number of Strings: ";
    cin >> N;

    vector<string> v;

    for (int i = 1; i <= N; i++)
    {
        cout << i << "th string : ";
        cin >> str;

        v.push_back(str);
    }

    sort(v.begin(), v.end(), compare);

    for (auto &i : v)
    {
        cout << i << endl;
    }
}