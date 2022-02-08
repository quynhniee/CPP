#include <iostream>
#include <string.h>
using namespace std;
void solve(string &s)
{
    for (int i = 0; i <= s.size(); i++)
    {
        if (s[i] > '9' || s[i] < '0')
            s.erase(i, 1);
    }
    if (s[0] == '8' && s[1] == '4')
    {
        s[1] = '0';
        s.erase(0, 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        scanf("\n");
        getline(cin, s);
        solve(s);
        cout << s << endl;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("\n");
    //     getline(cin, s[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     solve(s[i]);
    //     cout << s[i] << endl;
    // }
    return 0;
}