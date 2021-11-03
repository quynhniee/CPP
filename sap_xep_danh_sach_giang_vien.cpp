#include <iostream>
#include <string.h>
#include <sstream>
#include <algorithm>
using namespace std;
typedef struct
{
    string name, major, sj, fistname;
    string stt = "GV";
} list;
bool can_swap(list a, list b)
{
    if (a.fistname == b.fistname)
        return a.stt < b.stt;
    return a.fistname < b.fistname;
}
int main()
{
    int n;
    cin >> n;
    list a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("\n");
        getline(cin, a[i].name);
        scanf("\n");
        getline(cin, a[i].major);
        if (i + 1 < 10)
        {
            a[i].stt += "0";
            a[i].stt += to_string(i + 1);
        }
        else
            a[i].stt += to_string(i + 1);
        stringstream ss(a[i].major);
        string token;
        while (ss >> token)
        {
            token[0] = toupper(token[0]);
            a[i].sj += token[0];
        }
        stringstream ss1(a[i].name);
        while (ss1 >> token)
            a[i].fistname = token;
    }
    sort(a, a + n, can_swap);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].stt << " " << a[i].name << " " << a[i].sj << endl;
    }

    return 0;
}