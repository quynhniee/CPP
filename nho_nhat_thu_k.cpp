#include <iostream>
#include <algorithm>
using namespace std;
void nhap(int *a, int n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
}
void in(int *a, int n, int k)
{
    for (int i = k - 1; i < n; i++)
        if (a[i] == a[k - 1])
            cout << a[k - 1] << " ";
        else
            break;
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        nhap(a, n);
        in(a, n, k);
    }
}