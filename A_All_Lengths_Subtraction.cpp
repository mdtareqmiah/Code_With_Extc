#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        
        int need = 1;
        int l = 0, r = n-1;
        bool ok = true;
        while (l <= r && need <= n) {
            if (v[l] == need) {
                l++; need++;
            } else if (v[r] == need) {
                r--; need++;
            } else {
                ok = false;
                break;
            }
        }
        
        if(ok){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
