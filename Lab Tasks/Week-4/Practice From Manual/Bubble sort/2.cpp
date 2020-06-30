#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[100000], t;
    cout << "Enter Array Size:";
    cin >> n;
    cout << "Enter Elements of Array: ";
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) swap(a[j], a[j + 1]);
        }
    }
    int s = 0;
    cout << "Ascending order: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
        s += a[i];
    }
    cout << endl
         << "Sum = " << s << endl;

    return 0;
}
