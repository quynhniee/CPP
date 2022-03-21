#include <iostream>

int main () {
    int t;
    std::cin >> t;
    while (t--) {
        long long n, m=0, kq=0;
        std::cin >> n;
        while (n > 9) {
            m = 0;
            while (n != 0) {
                m += n%10;
                n /= 10;
            }
            if (m > 9) n = m;
            else    break;
        }
        
        std::cout << m << std::endl;
    }
    return 0;
}