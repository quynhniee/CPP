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
bool can_swap(SinhVien a, SinhVien b)
{
    if (a.lop < b.lop)
        return true;
    else if (a.lop == b.lop)
        return a.masv < b.masv;
    else
        return false;
}
void output(SinhVien &a)
{
    cout << a.masv << " " << a.name << " " << a.lop << " " << a.email << endl;
}
int main()
{
    int N, i;
    cin >> N;
    SinhVien ds[N + 1];
    for (i = 0; i < N; i++)
        input(ds[i]);
    sort(ds, ds + N, can_swap);
    for (i = 0; i < N; i++)
        output(ds[i]);
    return 0;
}