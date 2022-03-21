#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string name, ma;
    long long price, ngay;
    getline(cin, name);
    cin >> price;
    cin >> ngay;
    cin.ignore();
    getline(cin, ma);
    long long phuCap;
    price *= ngay;
    if (ma[0] == 'G')
        phuCap = 250000;
    if (ma[0] == 'P')
        phuCap = 200000;
    if (ma[0] == 'T')
        phuCap = 180000;
    if (ma[0] == 'N')
        phuCap = 150000;
    float heSo = 0;
    if (ngay >= 25)
    {
        heSo = 0.2;
    }
    else if (ngay >= 22)
    {
        heSo = 0.1;
    }
    long long thuong = (long long)price * heSo;
    cout << "NV01"
         << " " << name << " " << price << " " << thuong << " " << phuCap << " " << price + thuong + phuCap;
}