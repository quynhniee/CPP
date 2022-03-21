#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;
typedef struct
{
    string masv;
    string name;
    string lop;
    float diem1, diem2, diem3;
} SinhVien;
bool can_swap(SinhVien a, SinhVien b)
{
    return a.masv < b.masv;
}
int main()
{
    int n;
    cin >> n;
    SinhVien a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("\n");
        getline(cin, a[i].masv);
        scanf("\n");
        getline(cin, a[i].name);
        scanf("\n");
        getline(cin, a[i].lop);
        cin >> a[i].diem1 >> a[i].diem2 >> a[i].diem3;
    }
    sort(a, a + n, can_swap);
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " " << a[i].masv << " " << a[i].name << " " << a[i].lop << " ";
        cout << fixed << setprecision(1) << a[i].diem1 << " " << a[i].diem2 << " " << a[i].diem3 << endl;
    }
}