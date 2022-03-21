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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        std::sort(a, a + n);
        for (int i = 0; i < n / 2; i++)
            cout << a[n - 1 - i] << " " << a[i] << " ";
        if (n % 2 != 0)
            cout << a[n / 2];
        cout << endl;
    }
    return 0;
}