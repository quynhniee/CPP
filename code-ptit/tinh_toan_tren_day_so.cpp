#include <iostream>
#include <algorithm>
using namespace std;
const long long mod = 1e9 + 7;
long long mu(long long a, int b)
{
    if (b == 0)
        return 1;
    else if (b == 1)
        return a;
    else
    {
        long long k = mu(a, b / 2);
        if (b % 2 == 0)
            return k % mod * k % mod;
        else
            return a % mod * k % mod * k % mod;
    }
}
void solve(int *a, int n)
{
    long long h = 1;
    int g = a[0];
    for (int i = 0; i < n; i++)
    {
        g = __gcd(g, a[i]);
        h *= a[i];
        h %= mod;
    }
    cout << mu(h, g) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        solve(a, n);
    }
}