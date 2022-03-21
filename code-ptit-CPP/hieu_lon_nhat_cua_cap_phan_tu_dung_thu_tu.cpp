#include <iostream>
using namespace std;
void input(int *a, int n)
{
    int hieu = -1;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 1; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            int k = a[i] - a[j];
            if (k > 0)
            {
                if (k > hieu)
                    hieu = k;
            }
            else
                break;
        }
    }
    cout << hieu << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        input(a, n);
    }
}