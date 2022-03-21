#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<char> ans;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
        if (s[i] != 'o' && s[i] != 'a' && s[i] != 'i' && s[i] != 'u' && s[i] != 'e')
            ans.push_back(s[i]);
    }
    sort(ans.begin(), ans.end());
    for (char &i : ans)
        cout << i;
}

/*
Cho một xâu ký tự S chỉ bao gồm các ký tự chữ cái và không có khoảng trống.
Hãy loại bỏ các nguyên âm trong S và in các ký tự theo thứ tự từ điển.
Các nguyên âm bao gồm: ‘A’, ‘E’, ‘I’, ‘O’, ‘U’, ‘Y’ (cả viết hoa và viết thường).

HocVienCNBCVT
----------------
bccchnntvv
*/
