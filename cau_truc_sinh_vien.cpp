#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
struct SinhVien
{
    string name, clas, bday;
    float gpa;
};
void nhap(SinhVien &a)
{
    getline(cin, a.name);
    getline(cin, a.clas);
    cin >> a.bday;
    cin >> a.gpa;
}
void in(SinhVien &a)
{
    cout << "B20DCCN001 " << a.name << " " << a.clas << " ";
    if (a.bday[2] != '/')
        a.bday.insert(0, "0");
    if (a.bday[5] != '/')
        a.bday.insert(3, "0");
    cout << a.bday << " ";
    cout << fixed << setprecision(2) << a.gpa;
}
int main()
{
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}