#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
void input(int n, int *a)
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
        int n, k;
        cin >> n >> k;
        int a[n], count = 0;
        input(n, a);
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > k)
                continue;
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] + a[j] == k)
                    count++;
            }
        }
        cout << count << endl;
    }
}