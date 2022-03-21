#include <iostream>
using namespace std;
void input(int a[][100], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
}
void output(int a[][100], int n)
{
    int i = 0;
    while (i < n)
    {
        if (i % 2 == 0)
            for (int j = 0; j < n; j++)
                cout << a[i][j] << " ";
        else
            for (int j = n - 1; j >= 0; j--)
                cout << a[i][j] << " ";
        i++;
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[100][100];
        input(a, n);
        output(a, n);
    }
}