#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
struct Point
{
    double x, y;
};
void input(Point &A)
{
    cin >> A.x >> A.y;
}
double distance(Point &A, Point &B)
{
    return sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
}
int main()
{
    struct Point A, B;
    int t;
    cin >> t;
    while (t--)
    {
        input(A);
        input(B);
        cout << fixed << setprecision(4) << distance(A, B) << endl;
    }
    return 0;
}