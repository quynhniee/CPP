#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
void solve(long &n, int &count)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i % 2 == 0)
                count++;
            if ((n / i) % 2 == 0 && (n / i) != i)
                count++;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        if (n % 2 != 0)
            cout << "0\n";
        else
        {
            int count = 0;
            solve(n, count);
            cout << count << endl;
        }
    }
}