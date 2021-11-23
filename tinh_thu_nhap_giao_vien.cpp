#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string id, name;
    long long luongcb, phucap;
    cin >> id;
    scanf("\n");
    getline(cin, name);
    cin >> luongcb;
    int heso = (id[2] - '0') * 10 + id[3] - '0';
    if (id[0] == 'H' && id[1] == 'T')
        phucap = 2000000;
    else if (id[0] == 'H' && id[1] == 'P')
        phucap = 900000;
    else
        phucap = 500000;
    long long thunhap = luongcb * heso + phucap;
    cout << id << " " << name << " " << heso << " " << phucap << " " << thunhap << endl;
    return 0;
}