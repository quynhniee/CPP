#include <iostream>
#include <string.h>
using namespace std;
int tongcs(int n)
{
    int s = 0;
    while (n != 0)
    {
        s += n % 10;
        n /= 10;
    }
    if (s < 10)
        return s;
    else
        return tongcs(s);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = 0;
        for (int i = 0; i < s.size(); i++)
            n += s[i] - '0';
        if (tongcs(n) == 9)
            cout << "1\n";
        else
            cout << "0\n";
    }
}