#include <iostream>
#include <vector>
#include <utility>
#include <string.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    bool check = false;
    int dem = 0;
    string b;
    for (int i = 0; i < t; i++)
    {
        string a;
        getline(cin, a);
        if (a.length() == 0)
        {
            cout << b << ": ";
            cout << dem << endl;
            check = false;
            dem = 0;
        }
        else if (!check)
        {
            b = a;
            check = true;
        }
        else
            dem++;
    }
    cout << b << ": ";
    cout << dem;
    return 0;
}