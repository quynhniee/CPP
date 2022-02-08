#include <iostream>
#include <string.h>
using namespace std;
long long dem(string s, int k)
{
    int index = 0, count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        index = 0;
        for (int j = i; j < s.size(); j++)
        {
            index = index * 10 + s[j] - '0';
            if (index % k == 0)
                count++;
            index %= k;
        }
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << dem(s, 8) - dem(s, 24) << endl;
    }
    return 0;
}