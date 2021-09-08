#include <iostream>
#include <string.h>
#include <iomanip>
#include <algorithm>
using namespace std;
typedef struct
{
    string name, group;
    int stt;
    float purchase, price, profit;
} list;
void input(list *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i].stt = i + 1;
        scanf("\n");
        getline(cin, a[i].name);
        scanf("\n");
        getline(cin, a[i].group);
        cin >> a[i].purchase >> a[i].price;
        a[i].profit = a[i].price - a[i].purchase;
    }
}
bool can_swap(list a, list b)
{
    return a.profit > b.profit;
}
void output(list *a, int n)
{
    sort(a, a + n, can_swap);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].stt << " " << a[i].name << " " << a[i].group << " ";
        cout << fixed << setprecision(2) << a[i].profit << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    list a[n];
    input(a, n);
    output(a, n);
}