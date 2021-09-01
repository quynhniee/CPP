#include <iostream>
#include <algorithm>
#include <vector>
using std::cin;
using std::cout;
using std::endl;

void output(int n, int *a)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        std::vector<int> c;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            c.push_back(a[i]);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            c.push_back(b[i]);
        }
        std::sort(c.begin(), c.end());
        for (int i = 0; i < n + m; i++)
            cout << c[i] << " ";
        cout << endl;
    }
}