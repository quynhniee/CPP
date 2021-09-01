#include <iostream>
using namespace std;
void input(int n, int *a, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == x)
            count++;
    }
    if (count == 0)
        cout << "-1\n";
    else
        cout << count << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        input(n, a, x);
    }
    return 0;
}