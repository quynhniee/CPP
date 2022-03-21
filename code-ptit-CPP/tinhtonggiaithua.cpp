#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    long long tong=0, tich=1;
    for (int i=1; i<=n; i++) {
        tich *= i;
        tong += tich;
    }
    cout << tong << endl;
    return 0;
}