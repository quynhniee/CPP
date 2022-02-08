#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
typedef struct
{
    string masv, name, lop, email;
} SinhVien;

bool can_swap(SinhVien a, SinhVien b)
{
    return a.masv < b.masv;
}
void output(SinhVien &a)
{
    cout << a.masv << " " << a.name << " " << a.lop << " " << a.email << endl;
}
int main()
{
    int i = 0;
    SinhVien ds[10000];
    while (cin >> ds[i].masv)
    {
        scanf("\n");
        getline(cin, ds[i].name);
        cin >> ds[i].lop >> ds[i].email;
        i++;
    }
    sort(ds, ds + i, can_swap);
    for (int j = 0; j < i; j++)
        output(ds[j]);
    return 0;
}