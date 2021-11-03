#include <iostream>
#include <string.h>
using namespace std;
int count = 1;
class NhanVien
{
private:
    string manv, name, gender, dob, addr, id, date;

public:
    NhanVien();
    ~NhanVien();
    friend istream &operator>>(istream &is, NhanVien &a);
    friend ostream &operator<<(ostream &os, NhanVien &a);
};

NhanVien::NhanVien()
{
    manv = {}, name = {}, gender = {}, dob = {}, addr = {}, id = {}, date = {};
}

NhanVien::~NhanVien()
{
    count = 0;
}
istream &operator>>(istream &is, NhanVien &a)
{
    if (count < 10)
    {
        a.manv = "0000";
        a.manv += to_string(count);
    }
    else
    {
        a.manv = "000";
        a.manv += to_string(count);
    }
    count++;
    scanf("\n");
    getline(is, a.name);
    is >> a.gender >> a.dob;
    scanf("\n");
    getline(is, a.addr);
    is >> a.id >> a.date;
    return is;
}
ostream &operator<<(ostream &os, NhanVien &a)
{
    os << a.manv << " " << a.name << " " << a.gender << " " << a.dob << " " << a.addr << " " << a.id << " " << a.date << endl;
    return os;
}
int main()
{
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> ds[i];
    for (i = 0; i < N; i++)
        cout << ds[i];
    return 0;
}