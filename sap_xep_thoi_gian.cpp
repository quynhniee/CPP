#include <iostream>
#include <algorithm>
using namespace std;
typedef struct
{
    int hours, minutes, seconds;
} timee;
bool can_swap(timee a, timee b)
{
    if (a.hours < b.hours)
        return true;
    else if (a.hours == b.hours && a.minutes < b.minutes)
        return true;
    else if (a.hours == b.hours && a.minutes == b.minutes && a.seconds < b.seconds)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cin >> n;
    timee a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i].hours >> a[i].minutes >> a[i].seconds;
    sort(a, a + n, can_swap);
    for (int i = 0; i < n; i++)
        cout << a[i].hours << " " << a[i].minutes << " " << a[i].seconds << endl;
}