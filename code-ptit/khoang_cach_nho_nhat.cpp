#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;

void input(int n, int *a)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        input(n, a);
        std::sort(a, a + n);
        int min = 1e7;
        for (int i = 0; i < n - 1; i++)
            if (min > a[i + 1] - a[i])
                min = a[i + 1] - a[i];
        cout << min << endl;
    }
    return 0;
}