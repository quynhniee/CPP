#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
typedef struct
{
    string masv, name, lop, email;
} SinhVien;
void input(SinhVien &a)
{
    cin >> a.masv;
    scanf("\n");
    getline(cin, a.name);
    cin >> a.lop >> a.email;
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
        string s;
        cin >> s;
        cout << "DANH SACH SINH VIEN LOP " << s << ":\n";
        for (i = 0; i < N; i++)
            if (s == ds[i].lop)
                output(ds[i]);
    }
    return 0;
}