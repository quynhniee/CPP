#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int k = 0;
class NhanVien
{
private:
    string manv, name, gender, dob, addr, id, date;
    string d, m, y;

public:
    NhanVien();
    ~NhanVien();
    friend istream &operator>>(istream &is, NhanVien &a);
    friend ostream &operator<<(ostream &os, NhanVien &a);

    string getdob()
    {
        return dob;
    }
    string getD()
    {
        return d;
    }
    string getM()
    {
        return m;
    }
    string getY()
    {
        return y;
    }
};

NhanVien::NhanVien()
{
    manv = {}, name = {}, gender = {}, dob = {}, addr = {}, id = {}, date = {};
    d = {}, m = {}, y = {};
}

NhanVien::~NhanVien()
{
    k = 0;
}
istream &operator>>(istream &is, NhanVien &a)
{
    k++;
    if (k < 10)
    {
        a.manv = "0000";
        a.manv += to_string(k);
    }
    else
    {
        a.manv = "000";
        a.manv += to_string(k);
    }
    scanf("\n");
    getline(is, a.name);
    is >> a.gender >> a.dob;
    scanf("\n");
    getline(is, a.addr);
    is >> a.id >> a.date;
    a.d += a.dob[3], a.d += a.dob[4];
    a.m += a.dob[0], a.m += a.dob[1];
    a.y += a.dob[6], a.y += a.dob[7], a.y += a.dob[8], a.y += a.dob[9];
    return is;
}
ostream &operator<<(ostream &os, NhanVien &a)
{
    os << a.manv << " " << a.name << " " << a.gender << " " << a.dob << " " << a.addr << " " << a.id << " " << a.date << endl;
    return os;
}

bool can_swap(NhanVien a, NhanVien b)
{
    if (a.getY() < b.getY())
        return true;
    else if (a.getY() == b.getY() && a.getM() < b.getM())
        return true;
    else if (a.getY() == b.getY() && a.getM() == b.getM() && a.getD() < b.getD())
        return true;
    else
        return false;
}
void sapxep(NhanVien *a, int n)
{
    sort(a, a + n, can_swap);
}
int main()
{
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> ds[i];
    sapxep(ds, N);
    for (i = 0; i < N; i++)
        cout << ds[i];
    return 0;
}