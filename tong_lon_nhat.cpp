#include <iostream>
using namespace std;
void input(int *a, int n, long long &behind)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        behind += a[i];
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int size = (n > m) ? n : m;
        int a[size] = {0}, b[size] = {0};
        long long a_behind = 0, b_behind = 0, a_front = 0, b_front = 0, smax = 0;
        input(a, n, a_behind);
        input(b, m, b_behind);
        for (int i = 0; i < size; i++)
        {
            a_front += a[i], a_behind -= a[i];
            b_front += b[i], b_behind -= b[i];
            long long max_front = (a_front > b_front) ? a_front : b_front;
            long long max_behind = (a_behind > b_behind) ? a_behind : b_behind;
            if (smax < max_front + max_behind)
                smax = max_front + max_behind;
        }
        cout << smax << endl;
    }
}