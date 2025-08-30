#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        bool flag = false, flag1 = false;
        if (max(a, b) <= (2 * min(a, b)) + 2) {
            flag = true;
        }
        int r = c - a;
        int k = d - b;
        if (r >= 0 && k >= 0 && max(r, k) <= (2 * min(r, k)) + 2) {
            flag1 = true;
        }

        if (flag && flag1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
