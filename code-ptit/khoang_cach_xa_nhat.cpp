#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n];
        int max = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        // tìm hiệu lớn nhất của i-j thỏa mãn ràng buộc A[i]<=A[j]
        // nên chỉ cần cho j chạy từ i + max trở đi, nhỏ hơn không cần xét
        for (int i = 0; i < n; i++)
        {
            for (int j = n - 1; j >= i + max + 1; j--)
            {
                if (a[j] > a[i] && max < j - i)
                {
                    max = j - i;
                    break;
                }
            }
        }
        cout << max << endl;
    }
}