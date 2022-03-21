#include <iostream>
using namespace std;
int main()
{
    int n, m = 3, count = 0;
    cin >> n;
    int a[1000][4];
    for (int i = 0; i < n; i++)
    {
        int so0 = 0, so1 = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 0)
                so0++;
            else
                so1++;
        }
        if (so1 > so0)
            count++;
    }
    cout << count << endl;
}