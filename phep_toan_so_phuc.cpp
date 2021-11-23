#include <iostream>
#include <math.h>
using namespace std;
typedef struct
{
    int thuc = 0, ao = 0;
} SoPhuc;
SoPhuc binh_phuong_tong(SoPhuc &a, SoPhuc &b)
{
    SoPhuc C;
    C.thuc = (a.thuc + b.thuc) * (a.thuc + b.thuc) - (a.ao + b.ao) * (a.ao + b.ao);
    C.ao = 2 * (a.thuc + b.thuc) * (a.ao + b.ao);
    return C;
}
void hien_thi(SoPhuc &c)
{
    cout << c.thuc;
    (c.ao > 0) ? cout << " + " << c.ao << "i" : cout << " - " << abs(c.ao) << "i";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        SoPhuc A;
        SoPhuc B;
        cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
        SoPhuc C = binh_phuong_tong(A, B);
        hien_thi(C);
        cout << endl;
    }
}