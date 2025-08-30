#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;

        map<int,int> count;
        int ans = 0;

        for(int i=0; i<n; i++){
            count[a[i]]++;
            if(count[a[i]] == a[i]){
                ans += a[i];     
                count[a[i]] = 0;  
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
