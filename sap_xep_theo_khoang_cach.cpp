#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int x;
bool can_swap(int a, int b)
{
    return (abs(x - a) < abs(x - b));
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        stable_sort(a, a + n, can_swap);
        for (int i : a)
            cout << i << " ";
        cout << endl;
    }
}