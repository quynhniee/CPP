#include <iostream>
#include <math.h>
#include <string.h>
using std::cin;
using std::cout;
using std::string;

bool check(string s)
{
    for (int i = 0; i < s.size() - 1; i++)
        if (std::abs(s[i] - s[i + 1]) != 1)
            return false;
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (check(s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}