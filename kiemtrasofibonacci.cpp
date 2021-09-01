#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;

bool fibonacci(long long n)
{
    if (n == 1 || n == 0)
        return true;
    long long a1 = 1, a2 = 1, a3 = a1 + a2;
    while (a3 < n)
    {
        a1 = a2;
        a2 = a3;
        a3 = a1 + a2;
    }
    return (n == a3) ? true : false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (fibonacci(n) == true)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
