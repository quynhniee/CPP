#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a >= 39)
            a = 9;
        else if (a >= 37)
            a = 8.5;
        else if (a >= 35)
            a = 8;
        else if (a >= 33)
            a = 7.5;
        else if (a >= 30)
            a = 7;
        else if (a >= 27)
            a = 6.5;
        else if (a >= 23)
            a = 6;
        else if (a >= 20)
            a = 5.5;
        else if (a >= 16)
            a = 5;
        else if (a >= 13)
            a = 4.5;
        else if (a >= 10)
            a = 4;
        else if (a >= 7)
            a = 3.5;
        else if (a >= 5)
            a = 3;
        else if (a >= 3)
            a = 2.5;
        else
            a = 1;
        if (b >= 39)
            b = 9;
        else if (b >= 37)
            b = 8.5;
        else if (b >= 35)
            b = 8;
        else if (b >= 33)
            b = 7.5;
        else if (b >= 30)
            b = 7;
        else if (b >= 27)
            b = 6.5;
        else if (b >= 23)
            b = 6;
        else if (b >= 20)
            b = 5.5;
        else if (b >= 16)
            b = 5;
        else if (b >= 13)
            b = 4.5;
        else if (b >= 10)
            b = 4;
        else if (b >= 7)
            b = 3.5;
        else if (b >= 5)
            b = 3;
        else if (b >= 3)
            b = 2.5;
        else
            b = 1;
        float tong = (a + b + c + d) / 4;
        float temp = tong - (int)tong;
        if (temp < 0.25)
            tong = (int)tong;
        else if (temp < 0.75)
            tong = (int)tong + 0.5;
        else
            tong = (int)tong + 1;
        cout << fixed << setprecision(1) << tong << endl;
    }
}