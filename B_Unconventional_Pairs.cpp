#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        sort(v.begin(), v.end());

        ll res = 0;
        for (int i = 0; i < n; i += 2) {
            res = max(res, v[i+1] - v[i]);
        }

        cout << res << "\n";
    }

    return 0;
}
