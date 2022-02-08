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
        int n, so1 = 0, tang = 0, k = -1;
        cin >> n;
        int a[n];
        input(n, a);
        std::sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                so1++;
            if (a[i] >= 0 && a[i + 1] - a[i] > 1)
            {
                k = i;
                break;
            }
        }
        if (so1 == 0)
            cout << "1\n";

        else if (k != -1)
            cout << a[k] + 1 << endl;
    }
}