#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
struct SinhVien
{
    string name, clas, dob, masv = "N20DCCN001";
    float gpa;
};
void nhapThongTinSV(struct SinhVien &a)
{
    scanf("\n");
    getline(cin, a.name);
    cin >> a.clas >> a.dob >> a.gpa;
}
void solve(string &s)
{
    if (s[2] != '/')
        s = '0' + s;
    if (s[5] != '/')
        s.insert(3, "0");
}
void inThongTinSV(struct SinhVien &a)
{
    solve(a.dob);
    cout << a.masv << " " << a.name << " " << a.clas << " " << a.dob << " ";
    cout << fixed << setprecision(2) << a.gpa << endl;
}
int main()
{
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}