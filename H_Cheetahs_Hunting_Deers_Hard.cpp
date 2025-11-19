#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;

        vector<pair<ll, ll>> c(n), d(m);
        for (int i = 0; i < n; i++) {
            cin >> c[i].first;
            c[i].second = i; 
        }
        for (int i = 0; i < m; i++) {
            cin >> d[i].first;
            d[i].second = i + 1;
        }

        sort(c.begin(), c.end());
        sort(d.begin(), d.end());

        vector<ll> res(n, -1);
        int j = 0;
        bool possible = true;

        for (int i = 0; i < n; i++) {
            while (j < m && d[j].first >= c[i].first)
                j++;

            if (j >= m) {
                possible = false;
                break;
            }

            res[c[i].second] = d[j].second;
            j++;
        }

        if (!possible) {
            cout << "No\n";
        } else {
            cout << "Yes\n";
            for (int i = 0; i < n; i++) {
                cout << res[i] << (i + 1 == n ? '\n' : ' ');
            }
        }
    }
    return 0;
}
