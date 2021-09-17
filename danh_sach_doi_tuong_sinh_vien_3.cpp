#include <iostream>
#include <algorithm>
#include <string.h>
#include <iomanip>
#include <sstream>
using namespace std;
#define a() a
int k = 0;
class SinhVien
{
private:
    string name, lop, dob, masv;
    float gpa;

public:
    SinhVien();
    ~SinhVien();
    friend istream &operator>>(istream &is, SinhVien &a)
    {
        k++;
        scanf("\n");
        getline(is, a.name);
        is >> a.lop >> a.dob >> a.gpa;
        if (k < 10)
        {
            a.masv += "00";
            a.masv += to_string(k);
        }
        else
        {
            a.masv += "0";
            a.masv += to_string(k);
        }
        return is;
    }
    friend ostream &operator<<(ostream &os, SinhVien &a)
    {
        a.solve_name(a);
        a.solve_dob(a);
        os << a.masv << " " << a.name << a.lop << " " << a.dob << " ";
        os << fixed << setprecision(2) << a.gpa << endl;
        return os;
    }
    void solve_dob(SinhVien &a);
    void solve_name(SinhVien &a);
    float getGpa()
    {
        return gpa;
    }
};

SinhVien::SinhVien()
{
    masv = "B20DCCN";
    name = {}, lop = {}, dob = {};
    gpa = 0;
}

SinhVien::~SinhVien()
{
    k = 0;
}

void SinhVien::solve_dob(SinhVien &a)
{
    if (a.dob[2] != '/')
        a.dob.insert(0, "0");
    if (a.dob[5] != '/')
        a.dob.insert(3, "0");
}
void SinhVien::solve_name(SinhVien &a)
{
    transform(a.name.begin(), a.name.end(), a.name.begin(), ::tolower);
    string s = {};
    stringstream ss(a.name);
    string token;
    while (ss >> token)
    {
        token[0] -= 32;
        s += token;
        s += ' ';
    }
    this->name = s;
}
bool can_swap(SinhVien a, SinhVien b)
{
    return a.getGpa() > b.getGpa();
}
void sapxep(SinhVien *a, int n)
{
    stable_sort(a, a + n, can_swap);
}
int main()
{
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> ds[i];
    }
    sapxep(ds, N);
    for (i = 0; i < N; i++)
    {
        cout << ds[i];
    }
    return 0;
}