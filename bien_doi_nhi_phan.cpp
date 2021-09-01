#include <iostream>
using namespace std;
void input(int b[][100], int n, int m)
{
    int a;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> a;
            if (a == 1)
            {
                for (int k = 0; k < n; k++)
                    b[k][j] = 1;
                for (int k = 0; k < m; k++)
                    b[i][k] = 1;
            }
        }
}
void output(int b[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << b[i][j] << " ";
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, b[100][100] = {0};
        cin >> n >> m;
        input(b, n, m);
        output(b, n, m);
    }
}