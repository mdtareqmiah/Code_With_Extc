#include <bits/stdc++.h>
using namespace std;

int mex(vector<int> &v) {
    set<int> s(v.begin(), v.end());
    for (int i = 0; ; ++i)
        if (s.find(i) == s.end()) return i;
}

bool is_good_triplet(int a, int b, int c) {
    vector<int> v = {a, b, c};
    int mn = min({a, b, c});
    int mx = max({a, b, c});
    int m = mex(v);
    return m == mx - mn;
}

bool can_make_good(vector<int>& a) {
    int n = a.size();

    for (int i = 0; i <= n - 3; ++i) {
        vector<int> v = {a[i], a[i+1], a[i+2]};
        if (count(v.begin(), v.end(), -1) == 0) {
            if (!is_good_triplet(v[0], v[1], v[2]))
                return false;
        } else {
            bool ok = false;
            for (int x = 0; x <= 100 && !ok; ++x) {
                for (int y = 0; y <= 100 && !ok; ++y) {
                    for (int z = 0; z <= 100 && !ok; ++z) {
                        int p = (v[0] == -1) ? x : v[0];
                        int q = (v[1] == -1) ? y : v[1];
                        int r = (v[2] == -1) ? z : v[2];
                        if (is_good_triplet(p, q, r)) {
                            ok = true;
                        }
                    }
                }
            }
            if (!ok) return false;
        }
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        cout << (can_make_good(a) ? "YES\n" : "NO\n");
    }

    return 0;
}
