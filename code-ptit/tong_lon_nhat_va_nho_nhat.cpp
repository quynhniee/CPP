#include <iostream>
#include <string.h>
using namespace std;
void tinh(string s1, long long &n1, long long &l1)
{
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == '6')
            s1[i] = '5';
        n1 = n1 * 10 + (s1[i] - '0');
        if (s1[i] == '5')
            s1[i] = '6';
        l1 = l1 * 10 + (s1[i] - '0');
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        long long n1 = 0, n2 = 0, l1 = 0, l2 = 0;
        tinh(s1, n1, l1);
        tinh(s2, n2, l2);
        cout << n1 + n2 << " " << l1 + l2 << endl;
    }
}