#include <iostream>
#include <algorithm>
using namespace std;
void solve(int *a, int n)
{
    int k;
    // tìm vị trí mà tại đó a[j] > a[j+1] (theo chiều xuôi)
    for (int i = n - 1; i >= 0; i--)
        if (a[i] < a[i - 1])
        {
            k = i - 1;
            break;
        }
    int amax = 0, max;
    // tìm số lớn nhất nhỏ hơn a[k]
    for (int i = k + 1; i < n; i++)
        if (amax < a[i])
        {
            amax = a[i];
            max = i;
        }
    swap(a[k], a[max]);
    // sắp xếp các phần tử đứng sau vị trí vừa đổi theo thứ tự tăng dần
    sort(a + k + 1, a + n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}
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
        solve(a, n);
    }
}


// cách này dễ hơn nhiều :((
 /* 
 void input () {
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
}
void output () {
    for (int i=0; i<n; i++)
        cout << a[i] << " ";
    cout << endl;
}
void solution () {
    input();
    prev_permutation(a, a+n);
    output();
}
 */   