#include <iostream>
#include <algorithm>
using namespace std;
class PhanSo
{
private:
    long long tu, mau;

public:
    PhanSo();
    ~PhanSo();
    friend istream &operator>>(istream &is, PhanSo &p);
    friend ostream &operator<<(ostream &os, PhanSo &p);
    PhanSo(long long tu)
    {
        this->tu = tu;
    }
    PhanSo(long long tu, long long mau)
    {
        this->tu = tu;
        this->mau = mau;
    }
    void rutgon()
    {
        long long uoc = __gcd(tu, mau);
        tu /= uoc, mau /= uoc;
    }
};

PhanSo::PhanSo()
{
}

PhanSo::~PhanSo()
{
}
istream &operator>>(istream &is, PhanSo &p)
{
    is >> p.tu >> p.mau;
    return is;
}
ostream &operator<<(ostream &os, PhanSo &p)
{
    os << p.tu << "/" << p.mau << endl;
    return os;
}
int main()
{
    PhanSo p(1, 1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}