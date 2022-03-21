#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
bool ngto(int a, int b)
{
    return __gcd(a, b) == 1;
}
bool prime(int n)
{
    if (n < 2)
        return false;
    if (n % 2 == 0 && n != 2)
        return false;
    for (int i = 3; i <= sqrt(n); i += 2)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, count = 1;
        cin >> x;
        if (prime(x))
            count = x - 1;
        else
        {
            for (int i = 2; i < x; i++)
                if (ngto(i, x))
                    count++;
        }
        if (prime(count))
            cout << "1\n";
        else
            cout << "0\n";
    }
}