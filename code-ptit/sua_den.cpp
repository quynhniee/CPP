#include <iostream>
using namespace std;
int main()
{
    int n, k, b;
    cin >> n >> k >> b;
    int a[n + 5] = {0};
    if (k == n)
        cout << b << endl;
    else
    {   // tìm dãy k phần tử liên tiếp có ít đèn bị hỏng nhất <=> dãy k phần tử liên tiếp có tổng min
        // với a là mảng đánh dấu các vị trí đèn hỏng = 1, còn lại = 0;
        for (int i = 0; i < b; i++)
        {
            int x;
            cin >> x;
            a[x] = 1;
        }
        int s = 0;
        for (int i = 1; i <= k; i++)
            s += a[i];
        int min = s;
        for (int i = 2; i <= n - k + 1; i++)
        {
            s = s - a[i - 1] + a[i + k - 1];
            min = (s < min) ? s : min;
        }
        cout << min << endl;
    }
}