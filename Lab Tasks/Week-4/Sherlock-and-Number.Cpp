#include <iostream>
using namespace std;

int main() {
    int tests, n, k, p, x;
    cin >> tests;
    while (tests--) {
        cin >> n >> k >> p;
        for (int i = 0; i < k; i++) {
            cin >> x;
            if (x <= p) p++;
        }
        if (p > n)
            cout << -1 << endl;
        else
            cout << p << endl;
    }

    return 0;
}
