#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int a[1000] = {}, max = 0;
        for (int i = 0; i < s.size(); i++)
        {
            a[s[i]]++;
            if (max < a[s[i]])
                max = a[s[i]];
        }
        if (max <= s.size() - max + 1)
            cout << "1\n";
        else
            cout << "0\n";
    }
}