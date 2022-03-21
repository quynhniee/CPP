#include <iostream>
using namespace std;
int minSwap(int *a, int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        if (a[i] <= k)
            count++;
    int loai = 0;
    for (int i = 0; i < count; i++)
        if (a[i] > k)
            loai++;
    int ans = loai;
    for (int i = 0, j = count; j < n; j++, i++)
    {
        if (a[i] > k)
            loai--;
        if (a[j] > k)
            loai++;
        ans = (ans < loai) ? ans : loai;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], count = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << minSwap(a, n, k) << endl;
    }
}