#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

template <typename T>
T add(T n1, T n2)
{
    return n1 + n2;
}

template <typename T>
T Max(T n1, T n2)
{
    if (n1 > n2)
    {
        return n1;
    }
    return n2;
}

template <>
const char *Max(const char *n1, const char *n2)
{
    cout << "Template" << endl;
    if (strlen(n1) > strlen(n2))
    {
        return n1;
    }
    else
        return n2;
}

const char *Max(const char *n1, const char *n2)
{
    cout << "Not Template" << endl;
    if (strcmp(n1, n2) > 0)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}

int main()
{
    cout << add(7, 5) << "\n";
    cout << add(7.4, 5.156) << "\n";
    cout << Max(2, 5) << endl;
    cout << Max('P', 'G') << endl;
    cout << Max<const char *>("Monster", "September") << endl;
    cout << Max("Smells Like Teenspirit", "Nirvana") << endl;
}