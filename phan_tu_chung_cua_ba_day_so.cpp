#include <iostream>
#include <vector>
using namespace std;
#define max (long)1e6
long long a[max], b[max], c[max];
int n1, n2, n3;
void input(long long *a, int n1)
{
    for (int i = 0; i < n1; i++)
        cin >> a[i];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        a[max] = {0}, b[max] = {0}, c[max] = {0};
        cin >> n1 >> n2 >> n3;
        input(a, n1);
        input(b, n2);
        input(c, n3);
        int i1 = 0, i2 = 0, i3 = 0;
        bool check = false;
        while (i1 < n1 && i2 < n2 && i3 < n3)
        {
            if (a[i1] < b[i2])
                i1++;
            if (a[i1] > b[i2])
                i2++;
            if (c[i3] > b[i2])
                i2++;
            if (c[i3] < b[i2])
                i3++;
            if (a[i1] == b[i2] && b[i2] == c[i3])
            {
                cout << a[i1] << " ";
                i1++, i2++, i3++;
                check = true;
            }
        }
        if (!check)
            cout << "-1";
        cout << endl;
    }
    return 0;
}