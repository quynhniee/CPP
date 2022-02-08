#include <iostream>
#include <string.h>
using namespace std;
bool solve(string s)
{
    for (int i = 0; i < s.size() / 2; i++)
    {
        if ((s[i] - '0') % 2 != 0)
            return false;
        if (s[i] != s[s.size() - 1 - i])
            return false;
    }
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
        if (solve(s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}