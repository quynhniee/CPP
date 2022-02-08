#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
typedef struct {
    string name, dob, compare;
} in4;
void solve_dob (in4 &a) {
    stack<char> x;
    for (int i=a.dob.size()-1; i>=-1; i--) {
        if (a.dob[i] != '/' && i != -1) {
            x.push(a.dob[i]);
        }
        else {
            while (!x.empty()) {
                a.compare += x.top();
                x.pop();
            }
        }
    }
}
bool can_swap (in4 &a, in4 &b) {
    return a.compare > b.compare;
}
void solution () {
    int t;
    cin >> t;
    vector<in4> a(t);
    while (t--) {
        scanf ("\n");
        cin >> a[t].name >> a[t].dob;
        solve_dob(a[t]);
    }
    sort (a.begin(), a.end(), can_swap);
    cout << a[0].name << endl << a[a.size()-1].name << endl;
}
int main () {
    solution();
    return 0;
}



/*
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
*/