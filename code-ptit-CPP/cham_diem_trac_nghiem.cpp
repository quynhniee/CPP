#include <iostream> // std::fixed
#include <iomanip>  // std::setprecison
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int de, count = 0;
        cin >> de;
        char dapan1[] = "ABBADCCABDCCABD";
        char dapan2[] = "ACCABCDDBBCDDBB";
        char bailam[15] = {};
        switch (de)
        {
        case 101:
            for (int i = 0; i < 15; i++)
            {
                cin >> bailam[i];
                if (bailam[i] == dapan1[i])
                    count++;
            }
            break;
        default:
            for (int i = 0; i < 15; i++)
            {
                cin >> bailam[i];
                if (bailam[i] == dapan2[i])
                    count++;
            }
            break;
        }
        double diem = 10.0 * count / 15;
        cout << fixed << setprecision(2) << diem << endl;
    }
}