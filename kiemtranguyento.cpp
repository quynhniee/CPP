#include <iostream>
#include <math.h>

int sieveprime (long long n) {
    if (n<2)    return 0;
    if (n%2 == 0 && n>2)    return 0;
    for (int i=3; i<=sqrt(n); i+=2) {
        if (n%i == 0)   return 0;
    }
    return 1;
}
int main () {
    long long n;
    std::cin >> n;
    if (sieveprime(n) == 1) std::cout << "YES\n";
    else    std::cout << "NO\n";
}