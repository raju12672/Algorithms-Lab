  
#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {
    if (b == 0)
        return a;
    else
        return GCD(b, a % b);
}

int main() {
    int a, b, ans;
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " = " << GCD(a, b) << endl;

    return 0;
}
