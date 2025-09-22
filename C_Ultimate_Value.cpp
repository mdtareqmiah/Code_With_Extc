#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<ll> a(n+1);
        for (int i=1;i<=n;i++) cin >> a[i];

        ll S=0;
        for (int i=1;i<=n;i++) {
            if (i%2==1) S += a[i];
            else S -= a[i];
        }

        ll maxeven = LLONG_MIN;
        ll minodd = LLONG_MAX;
        for (int i=1;i<=n;i++) {
            if (i%2==0) maxeven = max(maxeven, (ll)i + 2*a[i]);
            else minodd = min(minodd, (ll)i + 2*a[i]);
        }

        ll best = S;
        if (maxeven != LLONG_MIN && minodd != LLONG_MAX) {
            best = max(best, S + maxeven - minodd);
        }
        cout << best << "\n";
    }
    return 0;
}
