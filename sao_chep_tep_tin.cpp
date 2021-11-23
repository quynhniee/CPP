#include <iostream>
#include <fstream>
using namespace std;
void copy_file(char *f1, char *f2)
{
    ifstream fp1; // khai bao file de doc
    fp1.open(f1); // mo file de doc
    ofstream fp2; // khai bao file de ghi
    fp2.open(f2); // mo file de ghi
    string line;
    while (!fp1.eof())
    {
        getline(fp1, line);
        cout << line << endl;
        fp2 << line << endl;
    }
    // không ghi được space
    // char x;
    // while (!fp1.eof())
    // {                     // lap den cuoi file
    //     fp1 >> x;         // doc tung chu
    //     cout << x;        // dua ra noi dung fp1
    //     fp2 << x; // ghi ky tu x vao fp2
    // }
    fp1.close(); // dong file
    fp2.close();
}
int main()
{
    copy_file("PTIT.in", "PTIT.out");
    return 0;
}