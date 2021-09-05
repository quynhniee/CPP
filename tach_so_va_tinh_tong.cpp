#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, s1;
        cin >> s;
        int sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
                sum += s[i] - '0';
            else
                s1 += s[i];
        }
        sort(s1.begin(), s1.end());
        cout << s1 << sum << endl;
    }
}