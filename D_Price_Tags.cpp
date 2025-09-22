#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        ll y;
        cin >> n >> y;
        vector<int> c(n);
        int m = 0;
        for(int i = 0; i < n; i++) {
            cin >> c[i];
            m = max(m, c[i]);
        }

        vector<int> v(m + 2, 0);
        for(int ci : c) v[ci]++;

        int b = max(2, (int)sqrt(m));

        ll res = LLONG_MIN;

        // Small x
        vector<int> v1(m + 2);
        for(int i = 2; i <= b; i++) {
            fill(v1.begin(), v1.end(), 0);
            ll sumd = 0;
            for(int val : c) {
                int ni = (val + i - 1) / i;
                v1[ni]++;
                sumd += ni;
            }
            ll nx = 0;
            for(int j = 1; j <= m; j++) {
                if(v1[j] > v[j]) nx += v1[j] - v[j];
            }
            res = max(res, sumd - nx * y);
        }
        for(int i = 0; i < n; i++) {
            for(int k = 1; k <= b; k++) {
                int x = (c[i] + k - 1) / k;
                if(x <= b) continue; 
                ll sumd = 0, nx = 0;
                for(int val : c) {
                    int ni = (val + x - 1) / x;
                    sumd += ni;
                    if(ni > v[ni]) nx += ni - v[ni];
                }
                res = max(res, sumd - nx * y);
            }
        }

        cout << res << "\n";
    }
    return 0;
}
