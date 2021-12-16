#include <iostream>
#include <algorithm>
using namespace std;
// tam giác vuông với cạnh là các số nguyên thì luôn có 1 cạnh chia hết cho 4 :>
// có thể áp dụng để tối ưu hơn nhaa
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] *= a[i];
        }
        sort(a, a + n);
        int x1 = n - 1, x2 = x1 - 1, x3 = 0, check = 0;
        while (x2 != 0 && a[x1] != a[x2] + a[x3])
        {
            if (a[x2] + a[x3] < a[x1])
                x3++;
            else if (a[x2] + a[x3] > a[x1])
                x2--;
            if (x2 == x3)
            {
                x1--;
                x2 = x1 - 1;
                x3 = 0;
            }
        }
        if (x2 != 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}