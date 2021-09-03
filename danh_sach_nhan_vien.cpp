#include <iostream>
#include <string.h>
using namespace std;
int stt = 1;
struct NhanVien
{
    string name, gender, bday, address, code, day;
};
void nhap(NhanVien &a)
{
    scanf("\n");
    getline(cin, a.name);
    getline(cin, a.gender);
    getline(cin, a.bday);
    getline(cin, a.address);
    getline(cin, a.code);
    getline(cin, a.day);
}
void inds(NhanVien a[], int N)
{
    for (int i = 0; i < N; i++)
    {
        if (stt + i < 10)
            cout << "0000" << stt + i << " ";
        else
            cout << "000" << stt + i << " ";
        cout << a[i].name << " " << a[i].gender << " " << a[i].bday << " " << a[i].address << " " << a[i].code << " " << a[i].day;
        cout << endl;
    }
}
int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    inds(ds, N);
    return 0;
}