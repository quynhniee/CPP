#include <bits/stdc++.h>
using namespace std;
void fibo (int n) {
    if (n==2 || n==1)   cout << "1\n";
    else {
        long long a0=1, a1=1, a2=a0+a1;
        int k=3;
        while (k<n) {
            a0=a1;
            a1=a2;
            a2=a0+a1;
            k++;
        }
        cout << a2 << endl;
    }
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        fibo (n);
    }
    return 0;
}