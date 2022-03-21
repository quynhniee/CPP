#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
struct ThiSinh
{
    string name;
    string bday;
    double a, b, c;
};
void nhap(ThiSinh &A)
{
    getline(cin, A.name);
    getline(cin, A.bday);
    cin >> A.a >> A.b >> A.c;
}
void in(ThiSinh &A)
{
    cout << A.name << " " << A.bday << " ";
    cout << fixed << setprecision(1) << A.a + A.b + A.c;
}
int main()
{
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}