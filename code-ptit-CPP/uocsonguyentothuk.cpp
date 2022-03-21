#include <bits/stdc++.h>
using namespace std;
int nt[100000]={0};
void sieveprime () {
    nt[0] = 1, nt[1] = 1;
    for (int i=0; i<=sqrt(100000); i++) {
        if (nt[i] == 0)
            for (int j=i*i; j<=100000; j+=i) nt[j] = 1;
    }
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k, count = 0, uoc[1000]={};
        cin >> n >> k;
        for (int i=2; i<=sqrt(n); i++) {
            if (nt[i]==0 && n%i==0) {
                while (n%i==0) {
                    uoc[++count] = i;
                    n /= i;
                }
            }
        }
        if (n != 1) uoc[++count] = n;
        if (k > count)  cout << "-1\n";
        else    cout << uoc[k] << endl;
        
    }
    return 0;
}