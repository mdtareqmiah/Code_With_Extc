#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if(!(cin >> t)) return 0;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        vector<int> b(k);
        for(int i=0;i<k;i++) cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        ll total = 0;
        for(ll u : a) total += u;

        ll res = 0;
        int r = n - 1;

        int x = 0;
        while(x < k && b[x] == 1 && r >= 0){
            res += a[r];
            r--; x++;
        }

        for(; x < k && r >= 0; ++x){
            int bi = b[x];
            if(bi <= 1) continue; 
            int x1 = r - (bi - 1);
            if(x1 < 0) break; 
            res += a[x1];
            r = x1 - 1; 
        }

        cout << (total - res) << '\n';
    }
    return 0;
}
