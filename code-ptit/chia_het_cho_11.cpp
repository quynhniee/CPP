#include <iostream>
#include <math.h>
using namespace std;
void solve(string s)
{
    long long even = 0, odd = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (i % 2 == 0)
            even += s[i] - '0';
        else
            odd += s[i] - '0';
    }
    if (abs(even - odd) % 11 == 0)
        cout << "1\n";
    else
        cout << "0\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin.ignore();
        string s;
        cin >> s;
        solve(s);
    }
}