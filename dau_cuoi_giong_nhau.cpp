#include <iostream>
#include <string.h>
using namespace std;
void solve(string s)
{
    int sum = s.size();
    int a[100000] = {0};
    for (int i = 0; i < s.size(); i++)
        a[s[i]]++;
    for (int i = 'a'; i <= 'z'; i++)
        if (a[i] > 1)
            sum += a[i] * (a[i] - 1) / 2;
    cout << sum << endl;
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