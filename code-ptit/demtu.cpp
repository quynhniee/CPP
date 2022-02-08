#include <iostream>
#include <string.h>
#include <sstream>

using std::cin;
using std::cout;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        std::cin.ignore();
        std::string s;
        std::getline(cin, s);
        std::stringstream ss(s);
        std::string token;
        int count = 0;
        while (ss >> token)
            count++;
        cout << count << std::endl;
    }
}
