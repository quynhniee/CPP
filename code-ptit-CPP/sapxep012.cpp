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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        std::sort(a, a + n);
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}