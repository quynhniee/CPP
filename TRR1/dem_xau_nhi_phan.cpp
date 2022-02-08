
#include <iostream>
#include <string>
#include <math.h>
#include <climits>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <utility>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;

// đếm số xâu nhị phân độ dài n thỏa mãn điều kiện

int n, a[1000]={0};
long long dem = 0;

bool bat_dau (int x) {
    return (a[0] == x && a[1] == x) ? true : false;
}
bool ket_thuc (int x) {
    return (a[n-1] == x && a[n-2] == x) ? true : false;
}
void check () {
    if (ket_thuc(0)) {
        dem++;
    }
}
void back_tracking (int i) {
    if (i==n)    check ();
    else {
        for (int j=0; j<=1; j++) {
            a[i] = j;
            back_tracking(i+1);
        }
    }
}
int main () {
    cout << "Nhap do dai xau:\t";
    cin >> n;
    back_tracking(0);
    cout << "Dap an la:\t" << dem << endl;
    return 0;
}