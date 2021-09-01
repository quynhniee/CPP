#include <iostream>
#include <algorithm>

int main () {
    int t;
    std::cin >> t;
    while (t--) {
        long long n, k, du = 0;
        std::cin >> n >> k;
        for (int i=1; i<=n; i++) {
            if (i%k == 0)   continue;
            else {
                du += i%k;
            }
        }
        std::cout << du <<std::endl;
    }
}