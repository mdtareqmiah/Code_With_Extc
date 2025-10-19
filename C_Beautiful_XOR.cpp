#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << "\n";
            continue;
        }

        long long x = a ^ b;

        if (x <= a) {
            cout << 1 << "\n" << x << "\n";
        } else if ((a ^ x) == b) {
            cout << 1 << "\n" << x << "\n";
        } else {
            // Always works in 2 operations
            cout << 2 << "\n" << a << " " << (a ^ b) << "\n";
        }
    }

    return 0;
}
    