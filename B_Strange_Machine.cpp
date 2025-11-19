#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        int ok = count(s.begin(), s.end(), 'B');

        while(q--){
            int a;
            cin >> a;

            if(!ok){
                cout << a << endl;
                continue;
            }
            int ans = 0;
            while(a > 0){
                for(int i = 0; i < n && a > 0; i++){
                    if(s[i] == 'A') a--;
                    else a /= 2;
                    ans++;
                }
            }
            cout << ans << endl;
            
        }
    }
    return 0;
}
