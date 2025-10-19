#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int totalA = count(s.begin(), s.end(), 'a');
        int totalB = n - totalA;

        // If already balanced
        if (totalA == totalB) {
            cout << 0 << "\n";
            continue;
        }

        int target = totalA - totalB;
        unordered_map<int, int> first;
        first[0] = 0; // before first character
        int diff = 0;
        int ans = n + 1;

        for (int i = 0; i < n; i++) {
            diff += (s[i] == 'a' ? 1 : -1);
            int need = diff - target;

            if (first.count(need)) {
                ans = min(ans, i + 1 - first[need]);
            }

            if (!first.count(diff))
                first[diff] = i + 1;
        }

        // Handle impossible case
        if (ans == n + 1) cout << -1 << "\n";
        else cout << ans << "\n";
    }

    return 0;
}
