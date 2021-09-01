#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>
#include <sstream>

int main()
{
    std::string s1, s2;
    std::getline(std::cin, s1);
    std::cin >> s2;
    std::stringstream ss(s1);
    std::string token;
    std::vector<std::string> ans;
    while (ss >> token)
    {
        ans.push_back(token);
        if (token != s2)
            std::cout << token << " ";
    }

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     if (s2.compare(ans[i]) != 0)
    //         std::cout << ans[i] << " ";
    // }
}