#include <iostream>
#include <algorithm>
#include <math.h>
typedef long long ll;
using namespace std;
long long boichung(ll x, ll y, ll z)
{
    long long k = x * y / __gcd(x, y);
    return k * z / __gcd(k, z);
}
long long mu(int n)
{
    if (n == 0)
        return 1;
    return 10 * mu(n - 1);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, z, n;
        cin >> x >> y >> z >> n;
        long long bcnn = boichung(x, y, z);
        long long min = mu(n - 1) / bcnn + 1;
        if (mu(n - 1) % bcnn == 0)
            min--;
        long long max = (mu(n) - 1) / bcnn;
        if (min <= max)
            cout << bcnn * min << endl;
        else
            cout << "-1\n";
    }
}