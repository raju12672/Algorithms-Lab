#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> zombies, vampires;
    int n, x, s = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x % 2)
            vampires.push_back(x);
        else
            zombies.push_back(x);
    }
    for (int i = 0; i < zombies.size(); i++) {
        x = zombies[i];
        int j = i - 1;
        while (j >= 0 && zombies[j] > x) {
            zombies[j + 1] = zombies[j];
            j--;
        }
        zombies[++j] = x;
    }

    for (int i = 0; i < vampires.size(); i++) {
        x = vampires[i];
        int j = i - 1;
        while (j >= 0 && vampires[j] > x) {
            vampires[j + 1] = vampires[j];
            j--;
        }
        vampires[++j] = x;
    }
    for (int i = 0; i < zombies.size(); i++) {
        cout << zombies[i] << " ";
        s += zombies[i];
    }
    cout << s << " ";
    s = 0;
    for (int i = 0; i < vampires.size(); i++) {
        cout << vampires[i] << " ";
        s += vampires[i];
    }
    cout << s << endl;

    return 0;
}
