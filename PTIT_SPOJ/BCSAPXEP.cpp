
#include <iostream>
#include <string>
#include <math.h>
#include <climits>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <utility>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
vector<int> a;
int n;
void init () {
    cin >> n;
    a.resize(n);
    for (int i=0; i<n; i++)
        cin >> a[i];
}
int partition (int left, int right) {
    int pivot = a[right];
    int i = left;
    for (int j = left; j < right; j++) {
        if (a[j] <= pivot) {
            swap(a[i], a[j]);
            i++;
        }
    }
    swap(a[i], a[right]);
    return i;
}
void quickSort (int left, int right) {
    if (left < right) {
        int pos = partition(left, right);
        quickSort(left, pos - 1);
        quickSort (pos + 1, right);
    }
}
void output () {
    for (int i:a)
        cout << i << endl;
    a.clear();
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    init();
    quickSort(0, n-1);
    output();
    return 0;
}