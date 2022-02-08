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
void rutgon(PhanSo &p)
{
    long long ucln = __gcd(p.mau, p.tu);
    p.mau /= ucln;
    p.tu /= ucln;
}
void in(PhanSo &p)
{
    cout << p.tu << "/" << p.mau << endl;
}
int main()
{
    struct PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}