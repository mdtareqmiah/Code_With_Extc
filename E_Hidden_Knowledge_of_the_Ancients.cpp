#include <bits/stdc++.h>
using namespace std;
using ll= long long;

ll fun(const vector<int> &v, int k, int l, int r) {
    int n = v.size();
    map<int,int> f1, f2;
    int l1 = 0, l2 = 0;
    ll ans = 0;
    int res1 = 0, res2 = 0;

    for (int i = 0; i < n; i++) {
        f1[v[i]]++;
        if (f1[v[i]] == 1) res1++;
        while (res1 > k) {
            f1[v[l1]]--;
            if (f1[v[l1]] == 0) res1--;
            l1++;
        }

        f2[v[i]]++;
        if (f2[v[i]] == 1) res2++;
        while (res2 > k-1) {
            f2[v[l2]]--;
            if (f2[v[l2]] == 0) res2--;
            l2++;
        }

        int s = max(l1, i - r + 1);
        int e = min(l2 - 1, i - l + 1);
        if (e >= s) ans += e - s + 1;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k, l, r;
        cin >> n >> k >> l >> r;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        cout << fun(v, k, l, r) << "\n";
    }
    return 0;
}
