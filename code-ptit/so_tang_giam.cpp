#include <iostream>
#include <math.h>
using namespace std;
bool snt(long long n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0 && n > 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
long long mu(int n)
{
    if (n == 0)
        return 1;
    else if (n == 1)
        return 10;
    else if (n % 2 == 0)
        return mu(n / 2) * mu(n / 2);
    else
        return 10 * mu((n - 1) / 2) * mu((n - 1) / 2);
}
bool tang(long long n)
{
    int m = n % 10;
    n /= 10;
    while (n != 0)
    {
        if (m <= (n % 10))
            return false;
        m = n % 10;
        n /= 10;
    }
    return true;
}
bool giam(long long n)
{
    int m = n % 10;
    n /= 10;
    while (n != 0)
    {
        if (m >= (n % 10))
            return false;
        m = n % 10;
        n /= 10;
    }
    return true;
}
void check(long long n, int &count)
{
    if ((n % 10) > ((n / 10) % 10) && tang(n) && snt(n))
        count++;
    else if ((n % 10) < ((n / 10) % 10) && giam(n) && snt(n))
        count++;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long min = mu(n - 1);
        long long max = min * 10;
        int count = 0;
        if (n == 1)
        {
            min = 3;
            count = 1;
        }
        else
            min++;
        for (long long i = min; i < max; i += 2)
        {
            check(i, count);
        }
        cout << count << endl;
    }
}