#include <iostream>
#include <vector>
using namespace std;
void input(int a[][100], int n, int *b)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (i == 0)
                b[a[i][j]] = 1;
        }
    }
}
// chỉ cần kiểm tra xem các phần tử ở dòng đầu tiên có lặp lại hay không, vì bài yêu cầu xuất hiện ở tất cả các hàng
void solve(int a[][100], int n, int *b)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[a[0][j]] != 0) // chỉ xét những phần tử vẫn lặp
            {
                int check = 0; // kiểm tra phần tử thứ j hàng 0 có lặp lại trong các hàng khác hay không
                for (int k = 0; k < n; k++)
                {
                    if (a[0][j] == a[i][k])
                    {
                        check = 1;
                        break;
                    }
                }
                if (check == 0)
                    b[a[0][j]] = 0; // phần tử k xuất hiện ở hàng này thì k cần xét nừa
            }
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[a[0][i]] != 0)
            count++;
    }
    cout << count << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[100][100], n, b[100000] = {0};
        cin >> n;
        input(a, n, b);
        solve(a, n, b);
    }
}