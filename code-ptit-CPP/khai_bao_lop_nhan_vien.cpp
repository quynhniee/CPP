#include <iostream>
#include <string.h>
using namespace std;
#define a() a
class NhanVien
{
private:
    string name, gender, dob, addr, id, date;

public:
    NhanVien();
    ~NhanVien();
    friend istream &operator>>(istream &is, NhanVien &a)
    {
        scanf("\n");
        getline(is, a.name);
        cin >> a.gender >> a.dob;
        scanf("\n");
        getline(is, a.addr);
        cin >> a.id >> a.date;
        return is;
    }
    friend ostream &operator<<(ostream &os, NhanVien &a)
    {
        os << "00001 " << a.name << " " << a.gender << " " << a.dob << " ";
        os << a.addr << " " << a.id << " " << a.date << endl;
        return os;
    }
};

NhanVien::NhanVien()
{
    name = {}, gender = {}, dob = {}, addr = {}, id = {}, date = {};
}

NhanVien::~NhanVien()
{
}

int main()
{
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}