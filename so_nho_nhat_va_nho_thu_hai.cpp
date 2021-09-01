#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
void input(int n, int *a, int *check)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] != a[i - 1] && i != 0)
            *check = 1;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, check = 0;
        cin >> n;
        int a[n];
        input(n, a, &check);
        if (check == 0)
            cout << "-1\n";
        else
        {
            std::sort(a, a + n);
            cout << a[0] << " ";
            for (int i = 1; i < n; i++)
            {
                if (a[i] != a[0])
                {
                    cout << a[i];
                    break;
                }
            }
            cout << endl;
        }
    }
}