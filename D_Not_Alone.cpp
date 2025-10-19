#include <bits/stdc++.h>
using namespace std;
using ll= long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        ll ans = LLONG_MAX;

        for (int i = 0; i < n; i++) {
            long long prev = a[(i - 1 + n) % n];
            long long next = a[(i + 1) % n];
            long long mx = max({a[i], prev, next});
            long long mn = min({a[i], prev, next});
            ans = min(ans, (mx - mn + 1) / 2);
        }

        cout << ans << "\n";
    }
}
