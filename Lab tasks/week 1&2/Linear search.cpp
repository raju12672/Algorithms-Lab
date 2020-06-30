#include <bits/stdc++.h>
using namespace std;

int LinearSearch(int items[], int n, int k) {
    int id;
    for (id = 0; id < n; id++) {
        if (items[id] == k) {
            return id;
        }
    }
    return -1;
}

int main() {
    int n, value, ListOfItems[100], ans;
    cout << "Enter the number of items:" << endl;
    cin >> n;

    cout << "Enter the Items:" << endl;
    for (int i = 0; i < n; i++) cin >> ListOfItems[i];

    cout << "Enter the finding value:" << endl;
    cin >> value;

    ans = LinearSearch(ListOfItems, n, value);

    if (ans == -1)
        cout << value << " not found!" << endl;
    else
        cout << value << " found at index: " << ans << endl;

    return 0;
}
