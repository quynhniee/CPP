#include <iostream>
#include <math.h>
#include <algorithm>

int uoc (int n) {
    for (int i=2; i<=sqrt(n); i++) {
        if (n%i == 0)   return i;
    }
    return n;
}
int main () {
    long long n, a[100000], k = 0, b[100000]={0};
    std::cin >> n;
    while (n > 1) {
        a[k] = uoc(n);
        int count = 0;
        while (n%a[k] == 0) {
            n /= a[k];
            count ++;
        }
        b[k] = count;
        k++;
    }
    for (int i=0; i<k; i++) {
        std::cout << a[i] << " " << b[i] << std::endl;
    }
}