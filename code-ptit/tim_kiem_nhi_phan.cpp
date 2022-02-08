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
int BinarySearch(int *a, int l, int r, int x)
{
    if (l <= r)
    {
        int mid = (r + l) / 2;
        if (x == a[mid])
            return 1;
        if (x > a[mid])
            return BinarySearch(a, mid + 1, r, x);
        if (x < a[mid])
            return BinarySearch(a, l, mid - 1, x);
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        input(n, a);
        std::sort(a, a + n);
        cout << BinarySearch(a, 0, n, x) << endl;
    }
}