#include <iostream>
using namespace std;
int n;
int a[100000];
bool check[10000];
void sinhHoanVi(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (check[j] == false)
        {
            check[j] = true;
            a[i] = j;
            if (i == n - 1)
            {
                for (int k = 0; k < n; k++)
                {
                    cout << a[k];
                }
                cout << " ";
            }
            else
                sinhHoanVi(i + 1);
            check[j] = false;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        sinhHoanVi(0);
        cout << endl;
    }
}