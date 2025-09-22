#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        vector<ll> v(n);
        for (ll &u : v) cin >> u;

        sort(v.begin(), v.end(), greater<ll>());

        long long res = 0;
        for (ll i = 0; i < min(n, m); i++) {
            res += v[i] * (m - i);
        }

        cout << res << "\n";
    }
    return 0;
}
