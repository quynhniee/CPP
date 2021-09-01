#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
void input(int n, long *a)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        long a[n], b[m];
        input(n, a);
        input(m, b);
        long maxa = *std::max_element(a, a + n - 1);
        long minb = *std::min_element(b, b + m - 1);
        cout << maxa * minb << endl;
    }
}