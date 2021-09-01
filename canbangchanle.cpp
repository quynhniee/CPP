#include <iostream>
#include <algorithm>
#include <math.h>

bool check (int n) {
    int even = 0, odd = 0;
    while (n != 0) {
        if (n%2)    odd++;
        else    even++;
        n /= 10;
    }
    if (even == odd)    return true;
    else    return false;
}
int main () {
    int n;
    std::cin >> n;
    int count = 0;
    for (int i=pow(10, n-1); i<pow(10, n); i++) {
        if (check(i))   {
            std::cout << i << " ";
            count++;
        }
        if (count % 10 == 0 && count != 0)  std::cout << std::endl;
    }
}