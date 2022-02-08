#include <bits/stdc++.h>
using namespace std;
int main () {
    double n, sum=0;
    cin >> n;
    for (int i=1; i<=n; i++) {
        sum += (double)1/(double)i;
    }
    printf ("%.4lf", sum);
    return 0;
}