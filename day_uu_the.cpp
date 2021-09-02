#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    //    cin.ignore();
    while (t--)
    {
        scanf("\n");
        int even = 0, odd = 0, size = 0;
        do
        {
            int n;
            cin >> n;
            ++size;
            if (n % 2 == 0)
                even++;
            else
                odd++;
        } while (getchar() != '\n');
        if (size % 2 == 0 && even > odd)
            cout << "YES\n";
        else if (size % 2 == 1 && odd > even)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}