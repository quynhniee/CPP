#include <iostream>
#include <algorithm>
using namespace std;
struct PhanSo
{
    long long tu, mau;
};
void nhap(PhanSo &p)
{
    cin >> p.tu;
    cin >> p.mau;
}
PhanSo tong(PhanSo &p, PhanSo &q)
{
    struct PhanSo t;
    t.tu = p.tu * q.mau + q.tu * p.mau;
    t.mau = p.mau * q.mau;
    long long ucln = __gcd(t.tu, t.mau);
    t.mau /= ucln;
    t.tu /= ucln;
    return t;
}
void in(PhanSo &p)
{
    cout << p.tu << "/" << p.mau << endl;
}
int main()
{
    struct PhanSo p, q;
    nhap(p);
    nhap(q);
    PhanSo t = tong(p, q);
    in(t);
    return 0;
}