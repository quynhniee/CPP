#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
void solve(string &s)
{
    int index = -1, k = -1, tang = -1;
    char max = -1;
    // tìm vị trí đầu tiên mà có chữ số trước > chữ số sau
    for (int i = 0; i < s.size() - 1; i++)
        if (s[i] > s[i + 1])
            k = i, tang = 1;
    for (int i = k + 1; i < s.size(); i++)
    { // tìm số lớn nhất nhỏ hơn số tại vị trí k để thực hiện đảo
        if (s[i] < s[k] && max < s[i])
            max = s[i], index = i;
    }
    if (tang == -1)
        cout << "-1\n";
    else
    {
        swap(s[k], s[index]);
        cout << s << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}