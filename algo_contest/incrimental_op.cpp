#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin>>t;
    while (t--) {
        int n; 
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        vector<ll> lv(n);
        vector<int> lb(n);
        ll bv = LLONG_MIN; int bi = -1;
        for (int j = 0; j < n; ++j) {
            ll v = a[j] + j;
            if (v > bv) { bv = v; bi = j; }
            lv[j] = bv;
            lb[j] = bi;
        }

        vector<ll> rv(n);
        vector<int> rb(n);
        bv = LLONG_MIN; bi = -1;
        for (int j = n-1; j >= 0; --j) {
            ll v = a[j] - j;
            if (v > bv) { bv = v; bi = j; }
            rv[j] = bv;
            rb[j] = bi;
        }

        vector<ll> v(n);
        vector<int> src(n);
        for (int j = 0; j < n; ++j) {
            ll leftv  = lv[j]  - j;
            ll rightv = rv[j] + j;
            if (leftv >= rightv) {
                v[j] = leftv;
                src[j] = lb[j];
            } else {
                v[j] = rightv;
                src[j] = rb[j];
            }
        }

        const int INF = 1e9;
        vector<int> v1(n, INF), R(n, -1);
        for (int j = 0; j < n; ++j) {
            int p = src[j];
            v1[p] = min(v1[p], j);
            R[p] = max(R[p], j);
        }

        auto ceil_log2 = [](ll x)->ll {
            if (x <= 1) return 0;
            ll k = 0;
            ll p = 1;
            while (p < x) { p <<= 1; ++k; }
            return k;
        };

        long long ans = 0;
        for (int p = 0; p < n; ++p) {
            if (R[p] == -1) continue; 
            for (int j = p + 1; j <= R[p]; ++j) {
                ll V = v[j-1];     
                ll Tgt = v[j];
                if (a[j] >= Tgt) continue;
                ll g0 = V - a[j];
                ll d  = V - Tgt;  
                if (d <= 0) {
                    
                    goto next_case;
                }
                ll x = (g0 + d - 1) / d; 
                ans += ceil_log2(x);
            }
            for (int j = p - 1; j >= v1[p]; --j) {
                ll V = v[j+1];
                ll Tgt = v[j];
                if (a[j] >= Tgt) continue;
                ll g0 = V - a[j];
                ll d  = V - Tgt;
                if (d <= 0) {
                    cout << "-1\n";
                    goto next_case;
                }
                ll x = (g0 + d - 1) / d;
                ans += ceil_log2(x);
            }
        }

        cout << ans << '\n';
        next_case: ;
    }
    return 0;
}
