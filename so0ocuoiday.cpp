#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k = 0;
        cin >> n;
        long long a[n], b[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] != 0)
                b[k++] = a[i];
        }
        for (int i = 0; i < n; i++)
            cout << b[i] << " ";
        cout << endl;
    }
}