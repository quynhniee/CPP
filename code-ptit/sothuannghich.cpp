#include <iostream>
using std::string;
int check (string s) {
    for (int i=0; i<=s.length()/2; i++) {
        if (s[i] != s[s.length()-1-i])  return 0;
    }
    return 1;
}
int main () {
    int t;
    std::cin >> t;
    while (t--) {
        std::cin.ignore();
        string s;
        std::cin >> s;
        if (check(s) == 1)    std::cout << "YES\n";
        else    std::cout << "NO\n";
    }
    return 0;
}