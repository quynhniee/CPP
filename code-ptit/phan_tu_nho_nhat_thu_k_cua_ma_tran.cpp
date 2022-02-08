#include <iostream>
#include <algorithm>
using namespace std;
void input(int *a, int n)
{
    for (int i = 0; i < n * n; i++)
        cin >> a[i];
    sort(a, a + n * n);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n * n];
        input(a, n);
        cout << a[k - 1] << endl;
    }
}