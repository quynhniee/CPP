#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
#define PI 3.141592653589793238
double a1, a2, b1, b2, c1, c2;
double a, b, c;
bool check()
{
    a = sqrt((a1 - b1) * (a1 - b1) + (a2 - b2) * (a2 - b2));
    b = sqrt((c1 - b1) * (c1 - b1) + (c2 - b2) * (c2 - b2));
    c = sqrt((a1 - c1) * (a1 - c1) + (a2 - c2) * (a2 - c2));
    if (a + b > c && b + c > a && c + a > b)
        return true;
    else
        return false;
}
void solve()
{
    double s = sqrt((a + b + c) * (a + b - c) * (b + c - a) * (a + c - b)) / 4;
    double r = a * b * c / (4 * s);
    double result = PI * r * r;
    cout << fixed << setprecision(3) << result << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
        if (!check())
            cout << "INVALID\n";
        else
        {
            solve();
        }
    }
    return 0;
}
