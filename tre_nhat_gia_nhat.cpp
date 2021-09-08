#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
typedef struct
{
    string name, bday;
    string year, month, day;
} info;
bool can_swap(info a, info b)
{
    if (a.year > b.year)
        return true;
    else if (a.year == b.year && a.month > b.month)
        return true;
    else if (a.year == b.year && a.month == b.month && a.day > b.day)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cin >> n;
    info a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].bday;
        for (int j = 0; j < 2; j++)
            a[i].day += a[i].bday[j];
        for (int j = 3; j < 5; j++)
            a[i].month += a[i].bday[j];
        for (int j = 6; j < 10; j++)
            a[i].year += a[i].bday[j];
    }
    sort(a, a + n, can_swap);
    cout << a[0].name << endl
         << a[n - 1].name << endl;
}