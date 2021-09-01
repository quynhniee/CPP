#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[100000], n, k;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        cout << a[k - 1] << endl;
    }
}