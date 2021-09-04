#include <iostream>
#include <math.h>
using namespace std;
bool snt(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
int tongcs(int n)
{
    int s = 0;
    if (n < 10)
        return n;
    while (n != 0)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}
int tonguoc(int n)
{
    int i = 2, s = 0;
    while (i <= n)
    {
        while (n % i == 0)
        {
            s += tongcs(i);
            n /= i;
        }
        ++i;
    }
    return s;
}
bool check(int n)
{
    return tongcs(n) == tonguoc(n);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (check(n) && !snt(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}