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
    int mn = INT_MAX, mx = INT_MIN;
    cout << "Ascending: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
        if (a[i] > mx) mx = a[i];
        if (a[i] < mn) mn = a[i];
    }
    cout << endl
         << "Difference btn max-min = " << mx - mn << endl;

    return 0;
}
© 2020 GitHub, Inc.
