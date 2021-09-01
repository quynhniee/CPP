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
    sieveprime();
    int a, b;
    cin >> a >> b;
    if (a > b)  swap (a, b);
    for (int i=a; i<=b; i++) {
        if (nt[i]==0)   cout << i << " ";
    }
    return 0;
}