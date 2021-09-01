#include <iostream>
#include <string.h>
using namespace std;
void solve(string s)
{
    int a[100000] = {0};
    for (int i = 0; i < s.size(); i++)
        a[s[i]]++;
    for (int i = 0; i < s.size(); i++)
        if (a[s[i]] == 1)
            cout << s[i];
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        solve(s);
    }
}