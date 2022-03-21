#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> k >> n;
        int a[n * k];
        for (int i = 0; i < n * k; i++)
            cin >> a[i];
        std::sort(a, a + n * k);
        for (int i = 0; i < n * k; i++)
            cout << a[i] << " ";
        cout << std::endl;
    }
}