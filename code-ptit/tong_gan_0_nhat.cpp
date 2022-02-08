#include <iostream>
#include <algorithm>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;
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
        int min = std::abs(a[0] + a[1]), MIN = a[0] + a[1];
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
            {
                int min1 = std::abs(a[i] + a[j]);
                if (min > min1)
                {
                    min = min1;
                    MIN = a[i] + a[j];
                }
            }
        cout << MIN << endl;
    }
}