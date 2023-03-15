#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
vector<string> arr;
vector<int> ans;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string S, E, Q, chatt, chatid;
    int s, e, q;
    cin >> S >> E >> Q;
    s = S[0] * 1000 + S[1] * 100 + S[3] * 10 + S[4];
    e = E[0] * 1000 + E[1] * 100 + E[3] * 10 + E[4];
    q = Q[0] * 1000 + Q[1] * 100 + Q[3] * 10 + Q[4];

    cout << s << " " << e << " " << q;

    int s = stoi(S);
    int e = stoi(E);
    int q = stoi(Q);

    while(cin >> chatt >> chatid)
    {   
        int str = chatt[0] * 1000 + chatt[1] * 100 + chatt[3] * 10 + chatt[4];
        
        if(str <= s)
        {
            arr.push_back(chatid);
        }
        else if(str >= e && str <= q)
        {
            auto it = find(arr.begin(), arr.end(), chatid);
            if(it != arr.end()) ans.push_back(1);
        }
        
    }
    cout << ans.size();

}