#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

int main()
{
    string id, name;
    float t, l, h, kv;
    getline(cin, id);
    getline(cin, name);
    cin >> t >> l >> h;
    float tong = 2 * t + l + h;
    if (id[2] == '1')
        kv = 0.5;
    else if (id[2] == '2')
        kv = 1;
    else if (id[2] == '3')
        kv = 2.5;
    cout << id << " " << name << " " << kv << " ";
    (tong == (int)tong) ? cout << (int)tong << " " : cout << fixed << setprecision(1) << tong << " ";
    (tong + kv >= 24) ? cout << "TRUNG TUYEN\n" : cout << "TRUOT\n";
    return 0;
}