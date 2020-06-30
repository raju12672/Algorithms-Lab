#include <bits/stdc++.h>
using namespace std;
struct st {
    int id, value;
} a[1000005];

int main() {
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i].value;
        a[i].id = i;
    }

    for (int i = 0; i < n; i++) {
        for (int i = 0; i < n - 1; i++) {
            if (a[i].value > a[i + 1].value) swap(a[i], a[i + 1]);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i].id;
        if (i == n - 1)
            cout << endl;
        else
            cout << " ";
    }

    return 0;
}
