#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
typedef struct
{
    string masv, name, lop, email, khoa;
} SinhVien;
void input(SinhVien &a)
{
    cin >> a.masv;
    scanf("\n");
    getline(cin, a.name);
    cin >> a.lop >> a.email;
    for (int i = 1; i < 3; i++)
        a.khoa += a.lop[i];
}

void output(SinhVien &a)
{
    cout << a.masv << " " << a.name << " " << a.lop << " " << a.email << endl;
}
int main()
{
    int N, i, q;
    cin >> N;
    SinhVien ds[N + 1];
    for (i = 0; i < N; i++)
        input(ds[i]);
    cin >> q;
    while (q--)
    {
        string nam, s;
        cin >> nam;
        s += nam[2];
        s += nam[3];
        cout << "DANH SACH SINH VIEN KHOA " << nam << ":\n";
        for (i = 0; i < N; i++)
            if (s == ds[i].khoa)
                output(ds[i]);
    }
    return 0;
}