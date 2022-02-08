#include <iostream>
using namespace std;
typedef struct
{
    int x, y, z;
} point;
void input(point &p)
{
    cin >> p.x >> p.y >> p.z;
}
void vectorr(point p1, point p2, point &vt1)
{
    vt1.x = p1.x - p2.x;
    vt1.y = p1.y - p2.y;
    vt1.z = p1.z - p2.z;
}
void solve(point p1, point p2, point p3)
{
    point vt; // tính [a,b]
    vt.x = p1.y * p2.z - p2.y * p1.z;
    vt.y = p1.z * p2.x - p2.z * p1.x;
    vt.z = p1.x * p2.y - p2.x * p1.y;
    int index = vt.x * p3.x + vt.y * p3.y + vt.z * p3.z; // tính [a, b].c
    if (index == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        point p1, p2, p3, p4;
        input(p1), input(p2), input(p3), input(p4);
        point vt1, vt2, vt3;
        vectorr(p1, p2, vt1), vectorr(p1, p3, vt2), vectorr(p1, p4, vt3);
        solve(vt1, vt2, vt3);
    }
}