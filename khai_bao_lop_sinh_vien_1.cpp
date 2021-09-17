#include <iostream>
#include <algorithm>
#include <string.h>
#include <iomanip>
using namespace std;
#define a() a
class SinhVien
{
private:
    string name, lop, dob;
    float gpa;

public:
    SinhVien();
    ~SinhVien();
    void input(SinhVien &a)
    {
        scanf("\n");
        getline(cin, a.name);
        cin >> a.lop >> a.dob >> a.gpa;
    }
    void solve(SinhVien &a)
    {
        if (a.dob[2] != '/')
            a.dob.insert(0, "0");
        if (a.dob[5] != '/')
            a.dob.insert(3, "0");
    }
    void output(SinhVien a)
    {
        cout << "B20DCCN001 Nguyen Van A " << a.lop << " " << a.dob << " ";
        cout << fixed << setprecision(2) << a.gpa << endl;
    }
};

SinhVien::SinhVien()
{
    name = {}, lop = {}, dob = {};
    gpa = 0;
}

SinhVien::~SinhVien()
{
}
void nhap(SinhVien &a)
{
    a.input(a);
}
void in(SinhVien &a)
{
    a.solve(a);
    a.output(a);
}
int main()
{
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}

/* 
class SinhVien{
    private:
		string ten;
		string lop;
		string ngaysinh;
		double diem;
	public:
		SinhVien(){
		};
		string getTen(){
			return this->ten;
		}
		void setTen(string t){
			this->ten = t;
		}
		string getLop(){
			return this->lop;
		}
		void setLop(string l){
			this->lop=l;
		}
		string getNgaysinh(){
			return this->ngaysinh;
		}
		void setNgaysinh(string ns){
			if(ns[2]!='/'){
				ns.insert(0,"0");
			}
			if(ns[5]!='/'){
				ns.insert(3,"0");
			}
			 this->ngaysinh=ns;
		}
		double getDiem(){
			return this->diem;
		}
		void setDiem(double d){
			this->diem=d;
		}
};
void nhap(SinhVien &p){
	string ten,ngaysinh,lop;
	double diem;
	scanf("\n");
	getline(cin,ten);
	cin>>lop>>ngaysinh>>diem;
	p.setTen(ten);
	p.setLop(lop);
	p.setNgaysinh(ngaysinh);
	p.setDiem(diem);
}
void in(SinhVien p){
	cout<<"B20DCCN001"<<" "<<"Nguyen Van A"<<" "<<p.getLop()<<" "<<p.getNgaysinh()<<" "<<" ";
	cout<<fixed<<setprecision(2)<<p.getDiem();
}
*/