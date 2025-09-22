#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<set<int>> sets(n);
        set<int> all;
        for (int i = 0; i < n; i++) {
            int li; cin >> li;
            for (int j = 0; j < li; j++) {
                int x; cin >> x;
                sets[i].insert(x);
                all.insert(x);
            }
        }

        // Check if any number missing
        if ((int)all.size() < m) {
            cout << "NO\n";
            continue;
        }

        if (n <= 2) {
            if (n == 1) cout << "NO\n";
            else {
                if (sets[0] == sets[1]) cout << "NO\n";
                else cout << "YES\n";
            }
        } else {
            cout << "YES\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
