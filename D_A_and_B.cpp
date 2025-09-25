#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll fun(const vector<int> &v) {
    int n = v.size();
    if (n == 0) return 0;
    vector<ll> v1(n);
    for (int i = 0; i < n; i++){
        v1[i] = v[i] - i;
    }
    sort(v1.begin(), v1.end());

    ll mid = v1[n/2];
    ll ans = 0;
    for (auto x : v1) ans += abs(x - mid);
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        vector<int> a, b;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a') a.push_back(i);
            else b.push_back(i);
        }

        ll res1 = fun(a);
        ll res2 = fun(b);
        cout << min(res1, res2) << "\n";
    }

    return 0;
}
