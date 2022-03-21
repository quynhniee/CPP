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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int left = 0, right = n - 1, count = 0;
        while (left <= right)
        {
            if (a[left] == a[right])
                left++, right--;
            else if (a[left] < a[right])
            {           // khi merge thì a[i+1] = a[i+1] + a[i]
                left++; // phải tăng left lên trước
                a[left] += a[left - 1];
                count++;
            }
            else
            {
                right--;
                a[right] += a[right + 1];
                count++;
            }
        }
        cout << count << endl;
    }
}