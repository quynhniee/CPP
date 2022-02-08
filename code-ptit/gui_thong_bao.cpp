#include <string.h>
#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        scanf("\n");
        string s;
        getline(cin, s);
        string token = "";
        int count = 0;
        stringstream ss(s);
        while (ss >> token)
        {
            count += token.length();
            if (count <= 100)
                cout << token << " ";
            else
                break;
            count++;
        }
        cout << endl;
    }
    return 0;
}