#include <iostream>
#include <math.h>
using namespace std;

bool solve(int n)
{
    int i = 2, count = 0;
    while (i <= n)
    {
        if (n % i == 0)
        {
            int k = 0;
            while (n % i == 0)
            {
                n /= i;
                k++;
            }
            count++;
            if (k > 1)
                return false;
        }
        if (i == 2)
            i++;
        else
            i += 2;
    }
    if (count == 3)
        return true;
    else
        return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (solve(n))
            cout << "1\n";
        else
            cout << "0\n";
    }
}