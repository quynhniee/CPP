#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
int k = 0;
bool search(string name, string key)
{
    for (int i = 0; i < name.size(); i++)
    {
        if (tolower(name[i]) == tolower(key[0]))
        {
            bool check = true;
            for (int j = 0; j < key.size(); j++)
                if (tolower(name[i + j]) != tolower(key[j]))
                {
                    check = false;
                    break;
                }
            if (check)
                return true;
        }
    }
    return false;
}
class gv
{
private:
    string name, sj, id = "GV", mon;

public:
    gv();
    void solve_sj(string sj, string &mon)
    {
        stringstream ss(sj);
        string token;
        while (ss >> token)
        {
            mon += toupper(token[0]);
        }
    }
    void set()
    {
        scanf("\n");
        getline(cin, this->name);
        scanf("\n");
        getline(cin, this->sj);
        if (k <= 9)
            id += '0' + to_string(k);
        else
            id += to_string(k);
        solve_sj(this->sj, this->mon);
    }
    void result()
    {
        cout << this->id << " " << this->name << " " << this->mon << endl;
    }
    string get_name()
    {
        return this->name;
    }
    ~gv();
};

gv::gv()
{
}

gv::~gv()
{
}

int main()
{
    int t;
    cin >> t;
    class gv a[100];
    while (++k <= t)
    {
        scanf("\n");
        a[k].set();
    }
    int n;
    cin >> n;
    while (n--)
    {
        scanf("\n");
        string key;
        cin >> key;
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << key << ":\n";
        for (int i = 1; i <= t; i++)
        {
            if (search(a[i].get_name(), key))
                a[i].result();
        }
    }

    return 0;
}