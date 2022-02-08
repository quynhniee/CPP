
#include <iostream>
#include <algorithm>
#include <math.h>

int mul(long long x, long long y, long long p)
{
    if (x == 1 || y == 0)
        return 1 % p;
    long long temp = mul(x, y / 2, p);
    if (y % 2 != 0)
        return temp % p * temp % p * x % p;
    return temp % p * temp % p;
}
int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        long long x, y, p;
        std::cin >> x >> y >> p;
        long long kq = mul(x, y, p);
        std::cout << kq << std::endl;
    }
}