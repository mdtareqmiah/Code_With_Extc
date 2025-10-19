#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int top = 0, bottom = 0, flexible = 0;

        // Count each type of operation
        for (char c : s) {
            if (c == '0') top++;          // remove from top
            else if (c == '1') bottom++;  // remove from bottom
            else flexible++;              // can remove from either side
        }

        string ans(n, '+'); // initially all cards remain

        // Cards definitely removed from top
        for (int i = 0; i < top; i++)
            ans[i] = '-';

        // Cards definitely removed from bottom
        for (int i = 0; i < bottom; i++)
            ans[n - 1 - i] = '-';

        // If there’s any flexible ('2'), mark the middle uncertain zone
        if (flexible > 0) {
            for (int i = top; i < n - bottom; i++)
                ans[i] = '?';
        }

        cout << ans << "\n";
    }

    return 0;
}
