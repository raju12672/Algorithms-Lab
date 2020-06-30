#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[100000], k, id = -1;
    cout << "Enter size of the array: ";
    cin >> n;
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Enter the product key: ";
    cin >> k;
    for (int i = 0; i < n; i++) {
        if (a[i] == k) id = i;
    }
    if (id == -1)
        cout << "Product not available." << endl;
    else
        cout << "Position = " << id << " row" << endl;
    return 0;
}
