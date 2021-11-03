#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
class DN
{
public:
    string code, name;
    int amount;
    void input()
    {
        cin >> this->code;
        scanf("\n");
        getline(cin, this->name);
        cin >> this->amount;
    }
    void output()
    {
        cout << this->code << " " << this->name << " " << this->amount << endl;
    }
    DN();
    ~DN();
};

bool can_swap(DN a, DN b)
{
    if (a.amount == b.amount)
        return a.code < b.code;
    return a.amount > b.amount;
}
void Swap(DN *a, int n)
{
    sort(a, a + n, can_swap);
}

DN::DN()
{
}

DN::~DN()
{
}

int main()
{
    int n;
    cin >> n;
    DN a[n];
    for (int i = 0; i < n; i++)
        a[i].input();
    Swap(a, n);
    for (int i = 0; i < n; i++)
        a[i].output();
    return 0;
}