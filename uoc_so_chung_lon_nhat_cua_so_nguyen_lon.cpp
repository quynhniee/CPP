#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, x = 0;
        string b;
        cin >> a >> b;
        for (char i : b)
            x = (x * 10 + i - '0') % a;
        // while (a != 0)
        // {
        //     int k = x % a;
        //     x = a;
        //     a = k;
        // }
        // cout << x << endl;
        cout << __gcd(a, x) << endl;
    }
    return 0;
}