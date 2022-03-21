#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
void input(int n, int *a, int *index)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] - a[i - 1] < 0)
            *index = i;
    }
}
int BinarySearch(int *a, int l, int r, int x)
{
    if (l <= r)
    {
        int mid = (l + r) / 2;
        if (x == a[mid])
            return mid + 1;
        if (x < a[mid])
            return BinarySearch(a, l, mid - 1, x);
        if (x > a[mid])
            return BinarySearch(a, mid + 1, r, x);
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, index = -1;
        cin >> n >> x;
        int a[n];
        input(n, a, &index);
        if (x > a[index])
            cout << BinarySearch(a, index, n, x) << endl;
        else
            cout << BinarySearch(a, 0, index, x) << endl;
    }
}