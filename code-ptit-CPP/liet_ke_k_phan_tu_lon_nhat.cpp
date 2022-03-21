#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void input(int n, int *a)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        input(n, a);
        sort(a, a + n, greater<int>());
        for (int i = 0; i < k; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}