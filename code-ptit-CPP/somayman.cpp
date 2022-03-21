#include <bits/stdc++.h>
//using namespace std;
int main () {
    int t;
    std::cin >> t;
    while (t--) {
        std::string s;
        std::cin >> s;
        if (s[s.length()-1]=='6' && s[s.length()-2]=='8')   std::cout << "1\n";
        else    std::cout << "0\n";
    }
    return 0;
}