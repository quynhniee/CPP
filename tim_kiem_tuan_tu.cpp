#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
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
        int n, k, check = -1;
        cin >> n >> k;
        int a[n], b[n];
        input(n, a);
        for (int i = 0; i < n; i++)
            if (a[i] == k)
            {
                check = i + 1;
                break;
            }
        cout << check << endl;
    }
}