#include <iostream>
#include <algorithm>
#include <math.h>

using std::cin;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n, a, b, count = 0;
        cin >> m >> n >> a >> b;
        if (m > n)
            std::swap(m, n);
        for (int i = m; i <= n; i++)
            if (i % a == 0 || i % b == 0)
                count++;
        std::cout << count << std::endl;
    }
}