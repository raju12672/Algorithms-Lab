#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[100000], j, x;
    cout << "Enter Array Size:";
    cin >> n;
    cout << "Enter Elements of Array: ";
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        x = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > x) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = x;
    }
    int s = 0;
    cout << "Ascending: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
        s += a[i];
    }
    cout << endl
         << "avg = " << (double)s / (double)n << endl;

    return 0;
}
