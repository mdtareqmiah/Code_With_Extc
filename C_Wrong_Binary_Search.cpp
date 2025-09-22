#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        // খুঁজে বের করি প্রথম এবং শেষ '1'
        int l = -1, r = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                if (l == -1) l = i;
                r = i;
            }
        }

        if (l == -1) {
            // কোনো '1' নেই → সব unstable → descending permutation
            cout << "YES\n";
            for (int i = n; i >= 1; i--) cout << i << " ";
            cout << "\n";
            continue;
        }

        // চেক করি সব '1' contiguous কিনা
        bool ok = true;
        for (int i = 0; i < l; i++) if (s[i] == '1') ok = false;
        for (int i = r + 1; i < n; i++) if (s[i] == '1') ok = false;

        if (!ok) {
            cout << "NO\n";
            continue;
        }

        // permutation তৈরি করি
        vector<int> perm(n);
        for (int i = 0; i < n; i++) perm[i] = i + 1;

        // 0-block before 1s reverse করে unstable করি
        reverse(perm.begin(), perm.begin() + l);
        // 0-block after 1s reverse করে unstable করি
        reverse(perm.begin() + r + 1, perm.end());

        cout << "YES\n";
        for (int x : perm) cout << x << " ";
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
