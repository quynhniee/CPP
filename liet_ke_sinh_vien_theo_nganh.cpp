#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
typedef struct
{
    string masv, name, lop, email, major;
} SinhVien;
void input(SinhVien *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].masv;
        scanf("\n");
        getline(cin, a[i].name);
        cin >> a[i].lop >> a[i].email;
        for (int j = 3; j <= 6; j++)
            a[i].major += a[i].masv[j];
    }
}
bool check(SinhVien a)
{
    if (a.major == "DCCN" || a.major == "DCAT")
        if (a.lop[0] == 'E')
            return false;
    return true;
}
int main()
{
    int n, q;
    cin >> n;
    SinhVien ds[n + 2];
    input(ds, n);
    cin >> q;
    while (q--)
    {
        string nganh, s;
        scanf("\n");
        getline(cin, nganh);
        if (nganh == "Ke toan")
            s = "DCKT";
        else if (nganh == "Vien thong")
            s = "DCVT";
        else if (nganh == "Dien tu")
            s = "DCDT";
        else if (nganh == "Cong nghe thong tin")
            s = "DCCN";
        else if (nganh == "An toan thong tin")
            s = "DCAT";
        transform(nganh.begin(), nganh.end(), nganh.begin(), ::toupper);
        cout << "DANH SACH SINH VIEN NGANH " << nganh << ":\n";
        for (int i = 0; i < n; i++)
        {
            if (s == ds[i].major && check(ds[i]))
                cout << ds[i].masv << " " << ds[i].name << " " << ds[i].lop << " " << ds[i].email << endl;
        }
    }
    return 0;
}