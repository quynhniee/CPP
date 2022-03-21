#include <iostream>
using std::cin;
using std::cout;
using std::endl;
void input(int n, int *a, int *sum)
{
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        *sum += a[i];
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        int a[n];
        input(n, a, &sum);
        cout << n * (n + 1) / 2 - sum << endl;
    }
}
