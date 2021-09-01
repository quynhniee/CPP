#include <iostream>
using std::string;
int check (string s) {
    if (s[0] == '0')    return 0;
    for (int i=0; i<s.length(); i++) {
        if (s[i] != '0' && s[i] != '6' && s[i] != '8')  return 0;
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
        if (check(s) == 0)  std::cout << "NO\n";
        else    std::cout << "YES\n";
    }
    return 0;
}