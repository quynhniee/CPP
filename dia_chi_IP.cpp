#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        char a[50];
        cin >> a;
        char *token = strtok(a, ".");
        bool check = true;
        int count = 0;
        while (token != NULL)
        {
            count++;
            if (strcmp(token, "255") > 0)
            {
                check = false;
                break;
            }
            token = strtok(NULL, ".");
        }
        if (check && count == 4)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
