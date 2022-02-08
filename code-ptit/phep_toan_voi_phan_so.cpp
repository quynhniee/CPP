#include <iostream>
#include <algorithm>
using namespace std;
typedef struct
{
    long long tu, mau;
} PhanSo;
PhanSo tinh_C(PhanSo a, PhanSo b)
{
    PhanSo c;
    c.tu = a.tu * b.mau + b.tu * a.mau;
    c.mau = a.mau * b.mau;
    int ucln = __gcd(c.tu, c.mau);
    c.tu /= ucln, c.tu *= c.tu;
    c.mau /= ucln, c.mau *= c.mau;
    return c;
}
void process(PhanSo a, PhanSo b)
{
    int k1 = __gcd(a.tu, a.mau);
    a.tu /= k1, a.mau /= k1;
    int k2 = __gcd(b.tu, b.mau);
    b.tu /= k2, b.mau /= k2;
    PhanSo c = tinh_C(a, b);
    PhanSo d;
    d.tu = a.tu * b.tu * c.tu;
    d.mau = a.mau * b.mau * c.mau;
    int k = __gcd(d.tu, d.mau);
    d.tu /= k, d.mau /= k;
    cout << c.tu << "/" << c.mau << " " << d.tu << "/" << d.mau << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        PhanSo A;
        PhanSo B;
        cin >> A.tu >> A.mau >> B.tu >> B.mau;
        process(A, B);
    }
}