#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        int min = -1, max = -1;
        for (int i = 0; i < n; i++)
            if (b[i] != a[i])
            {
                min = i + 1;
                break;
            }
        for (int i = n - 1; i >= 0; i--)
            if (b[i] != a[i])
            {
                max = i + 1;
                break;
            }
        cout << min << " " << max << endl;
    }
}