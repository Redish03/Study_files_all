#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
{
    int arr[1001];
    int N;
    int count = 0;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int Max = arr[0];
    for (int i = 1; i < N; i++)
    {
        if(Max > arr[i])
        {
            continue;
        }
        
    }

} // namespace std;
