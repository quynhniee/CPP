#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n + 5];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        stable_sort(a, a + n);
        long long count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int index = a[i] + k;
            // lower_bound trả về ĐỊA CHỈ phẩn tử thỏa mãn
            // địa chỉ của mảng a cũng chính là địa chỉ của phần tử a[0]
            int temp = lower_bound(a + i, a + n, index) - a;
            int x = temp - i - 1;
            count += x;
        }
        cout << count << endl;
    }
}