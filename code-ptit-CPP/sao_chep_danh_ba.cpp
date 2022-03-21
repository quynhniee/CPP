#include <bits/stdc++.h>
using namespace std;
struct Sotay
{
    string ngay;
    string ho1, dem1, ten1;
    string sdt;
    void kt(string a, string b, string c, string d, string e)
    {
        ngay = a;
        ho1 = b;
        dem1 = c;
        ten1 = d;
        sdt = e;
    }
};
vector<Sotay> x;
bool kt(Sotay a, Sotay b)
{
    if (a.ten1 == b.ten1)
        return a.dem1 < b.dem1;
    else
        a.ten1 < b.ten1;
}
void solve()
{
    Sotay Tinh;
    ifstream file;
    file.open("SOTAY.txt");
    string ngay2;
    string ho, dem, ten;
    string sodt;
    string n;
    while (file >> n)
    {
        if (n == "Ngay")
        {
            file >> n;
            ngay2 = n;
            file >> ho;
            file >> dem;
            file >> ten;
            file >> sodt;
            Tinh.kt(ngay2, ho, dem, ten, sodt);
            x.push_back(Tinh);
        }
        else
        {
            ho = n;
            file >> dem;
            file >> ten;
            file >> sodt;
            Tinh.kt(ngay2, ho, dem, ten, sodt);
            x.push_back(Tinh);
        }
    }
    file.close();
    ofstream file2;
    file2.open("DIENTHOAI.txt");
    sort(x.begin(), x.end(), kt);
    for (int i = 0; i < x.size(); i++)
    {
        file2 << x[i].ho1 << " " << x[i].dem1 << " " << x[i].ten1 << ":"
              << " " << x[i].sdt << " " << x[i].ngay << endl;
    }
    file2.close();
}
int main()
{
    solve();
}