#include <iostream>
using namespace std;
// ITPTIT - Mai la anh em

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = 0; j < n; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}
