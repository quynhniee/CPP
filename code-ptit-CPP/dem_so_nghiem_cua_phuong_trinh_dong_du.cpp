#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long b, p;
        cin >> b >> p;
        long long count = 0;
        long long min = (b < p) ? b : p;
        for (long long i = 1; i < min; i++)
        {
            if ((i * i) % p == 1)
            {
                count++;
                count += (b - i) / p;
            }
        }
        cout << count << endl;
    }
}