#include <iostream>
#include <string.h>
using namespace std;
struct NhanVien
{
    string name, gender, bday, address, code, day;
};
void nhap(NhanVien &a)
{
    getline(cin, a.name);
    getline(cin, a.gender);
    getline(cin, a.bday);
    getline(cin, a.address);
    getline(cin, a.code);
    getline(cin, a.day);
}
void in(NhanVien &a)
{
    cout << "00001 " << a.name << " " << a.gender << " " << a.bday << " " << a.address << " " << a.code << " " << a.day;
}
int main()
{
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}