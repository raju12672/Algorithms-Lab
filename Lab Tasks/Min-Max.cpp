#include <iostream>
using namespace std;

int main() {
    long long n, x, mx = 0, mn = 1000000000000000, s = 0;
    cin >> n;
    while (n--) {
        cin >> x;
        s += x;
        if (x > mx) mx = x;
        if (x < mn) mn = x;
    }
    cout << s - mx << " " << s - mn << endl;

    return 0;
}
