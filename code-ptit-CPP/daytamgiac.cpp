#include <iostream>
#include <algorithm>

int a[10000000] = {};

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        for (int i = 0; i < n; i++)
            std::cin >> a[i];
        std::sort(a, a + n, std::greater<int>());
        std::cout << a[0] << std::endl;
    }
}
