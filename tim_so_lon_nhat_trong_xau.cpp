#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
bool so(char x)
{
    return (x >= '0' && x <= '9');
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<long> ans;
        long k = 0, max = -1;
        for (int i = 0; i < s.size(); i++)
        {
            if (so(s[i]))
                k = k * 10 + (s[i] - '0');
            if (so(s[i]) && !so(s[i + 1]))
            {
                if (max < k)
                    max = k;
                k = 0;
            }
        }
        cout << max << endl;
    }
}