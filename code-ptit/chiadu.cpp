#include <iostream>
int ktra (int a, int m) {
    for (int x=0; x<m; x++) {
        if ((a*x)%m == 1)   return x;
    }
    return -1;
}
int main () {
    int t;
    std::cin >> t;
    while (t--) {
        int a, m;
        std::cin >> a >> m;
        std::cout << ktra(a, m) << std::endl;
    }
}