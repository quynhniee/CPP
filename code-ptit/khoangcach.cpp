#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        double a, b, c, d;
        cin >> a>>b>>c>>d;
        printf ("%.4lf\n", sqrt((a-c)*(a-c)+(b-d)*(b-d))) ;
    }
    return 0;
}