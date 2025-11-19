#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n), c(n);
        for (auto &x : a) cin >> x;
        for (auto &x : c) cin >> x;

        // Coordinate compression
        vector<ll> vals = a;
        sort(vals.begin(), vals.end());
        vals.erase(unique(vals.begin(), vals.end()), vals.end());
        int m = vals.size();

        vector<ll> prev(m), cur(m);

        // Base case
        for (int j = 0; j < m; ++j)
            prev[j] = (a[0] == vals[j] ? 0 : c[0]);

        for (int i = 1; i < n; ++i) {
            vector<ll> pref(m);
            pref[0] = prev[0];
            for (int j = 1; j < m; ++j)
                pref[j] = min(pref[j - 1], prev[j]);

            for (int j = 0; j < m; ++j)
                cur[j] = pref[j] + (a[i] == vals[j] ? 0 : c[i]);

            prev = cur;
        }

        cout << *min_element(prev.begin(), prev.end()) << "\n";
    }
    return 0;
}
