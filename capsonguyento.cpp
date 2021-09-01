#include <bits/stdc++.h>
using namespace std;
int a[100000]={0};
void sangnt () {
    a[0]=1, a[1]=1;
    for (int i=2; i<=sqrt(100000); i++) {
        if (a[i]==0)
            for (int j=i*i; j<=100000; j+=i) {
                    a[j] = 1;
            }
    }
}
int main () {
    int t;
    cin >> t;
    sangnt();
    while (t--) {
        int n;
        cin >> n;
        for (int i=2; i<=n/2; i++) {
            if (a[i]==0 && a[n-i]==0)  {
                cout << i << " " << n-i << endl;
                break;
            }
        }
    }
    return 0;
}