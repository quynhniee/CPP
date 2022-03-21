#include <iostream>
#include <string.h>
using namespace std;
void check(string s, int k)
{
    int a[1000] = {0}, count = 0;
    for (int i = 0; i < s.size(); i++)
        a[s[i]]++;
    for (int i = 'a'; i <= 'z'; i++)
        if (a[i] != 0)
            count++;
    int index = 'z' - 'a' + 1 - count;
    if (index <= k)
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
        getline(cin, s);
        int k;
        cin >> k;
        check(s, k);
    }
}