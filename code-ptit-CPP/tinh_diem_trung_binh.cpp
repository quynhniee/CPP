#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
    int n, count = 0;
    double sum = 0;
    cin >> n;
    double a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    double Max = *max_element(a, a + n);
    double Min = *min_element(a, a + n);
    for (int i = 0; i < n; i++)
        if (a[i] != Min && a[i] != Max)
        {
            sum += a[i];
            count++;
        }
    cout << fixed << setprecision(2) << sum / (double)count << endl;
    return 0;
}