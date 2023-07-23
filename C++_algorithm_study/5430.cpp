#include <iostream>
#include <deque>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int T, N;
    string p, num, cur = "";
    deque<int> dq;
    bool error = false;

    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> p;
        cin >> N;

        cin >> num;
        for (int j = 0; j < num.length(); j++)
        {
            if (num[j] == '[' || num[j] == ']' || num[j] == ',')
            {
                if (num[j] == '[')
                    continue;
                if (N == 0)
                    continue;

                dq.push_back(stoi(cur));
                cur = "";
            }
            else
            {
                cur += num[j];
            }
        }
        // 위 코드까지 deque에 값 넣고 전처리

        bool reverse_count = false;
        for (int j = 0; j < p.length(); j++)
        {
            if (p[j] == 'R')
            {
                reverse_count = !reverse_count;
            }
            else if (p[j] == 'D')
            {
                if (dq.empty())
                {
                    error = true;
                    break;
                }
                if (reverse_count)
                    dq.pop_back();
                else
                    dq.pop_front();
            }
        }

        if (error)
        {
            cout << "error" << endl;
                }
        else
        {
            cout << "[";

            if (reverse_count)
            {
                reverse(dq.begin(), dq.end());
            }

            for (int j = 0; j < dq.size(); j++)
            {
                if (j == dq.size() - 1)
                {
                    cout << dq[j];
                }
                else
                {
                    cout << dq[j] << ",";
                }
            }
            cout << ']' << endl;
        }
        dq.clear();
        error = false;
    }
}