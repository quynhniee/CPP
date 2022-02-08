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
        long k = 0, sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (so(s[i]))
                k = k * 10 + (s[i] - '0');
            if (so(s[i]) && !so(s[i + 1]))
            {
                ans.push_back(k);
                k = 0;
            }
        }
        for (int i : ans)
            sum += i;
        cout << sum << endl;
    }
}