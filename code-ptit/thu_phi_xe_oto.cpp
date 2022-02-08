#include <iostream>
#include <string.h>
#include <map>
#include <vector>
using namespace std;
map<string, long long> ans;
vector<string> day;
typedef struct
{
    string id, name, act, date;
    long long amount, pay = 0;
} inf;
void sotien(inf &car)
{
    if (car.act == "IN")
    {
        if (car.name == "Xe_con" && car.amount == 5)
            car.pay = 10000;
        else if (car.name == "Xe_con" && car.amount == 7)
            car.pay = 15000;
        else if (car.name == "Xe_tai")
            car.pay = 20000;
        else if (car.name == "Xe_khach" && car.amount == 29)
            car.pay = 50000;
        else if (car.name == "Xe_khach" && car.amount == 45)
            car.pay = 70000;
    }
}
void nhap(inf &car)
{
    cin >> car.id >> car.name >> car.amount >> car.act >> car.date;
    sotien(car);
    day.push_back(car.date);
    ans[car.date] += car.pay;
}
int main()
{
    int n;
    cin >> n;
    inf car[n + 2];
    for (int i = 0; i < n; i++)
    {
        nhap(car[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (ans[car[i].date] != 0)
        {
            cout << car[i].date << ": " << ans[car[i].date] << endl;
            ans[car[i].date] = 0;
        }
    }
    ans.clear();
    day.clear();
    return 0;
}