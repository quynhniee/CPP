#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <sstream>
#include <fstream>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
typedef struct
{
    string date, name, phone;
    string last, dem, t[100];
} danhba;
bool can_swap(danhba a, danhba b)
{
    if (a.last < b.last)
        return true;
    if (a.last > b.last)
        return false;
    if (a.dem < b.dem)
        return true;
    return false;
}
void tach(danhba &p)
{
    stringstream ss(p.name);
    int n = 0;
    string token;
    while (ss >> token)
    {
        p.t[n++] = token;
    }
    p.last = p.t[n - 1];
    p.dem = p.t[n - 2];
}
int main()
{
    ifstream fp1("SOTAY.txt");
    ofstream fp2("DIENTHOAI.txt");
    string line, s;
    string day[100];
    int j = 0, i = 0;
    danhba a[100];
    bool check = false;
    while (!fp1.eof())
    {
        getline(fp1, line);
        if (line.find("Ngay") != string::npos)
        {
            s = line;
        }
        else
        {
            a[i / 2].date = s;
            if (i % 2 == 0)
            {
                a[i / 2].name = line;
                tach(a[i / 2]);
            }
            if (i % 2 == 1)
                a[i / 2].phone = line;

            ++i;
        }
    }
    sort(a, a + i / 2 + 1, can_swap);
    for (int k = 1; k <= i / 2; k++)
    {
        fp2 << a[k].name << ": " << a[k].phone << " " << a[k].date << endl;
    }
    fp1.close();
    fp2.close();
    return 0;
}