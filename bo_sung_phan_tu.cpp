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
        int n, k = 0;
        cin >> n;
        int a[n];
        input(n, a);
        std::sort(a, a + n);
        int max = a[n - 1], min = a[0];
        for (int i = 0; i < n - 1; i++)
            if (a[i] != a[i + 1])
                k++;
        cout << max - min - k << endl;
    }
}