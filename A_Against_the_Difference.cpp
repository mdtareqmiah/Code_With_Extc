#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];

        vector<int> dp(n+1,0);
        unordered_map<int,vector<int>> mp;

        for(int i=0;i<n;i++) {
            dp[i+1] = dp[i]; 

            auto &v = mp[arr[i]];
            v.push_back(i);

            int cnt = v.size();
            if(cnt >= arr[i]) {
                int ind = v[cnt - arr[i]];
                dp[i+1] = max(dp[i+1], dp[ind] + arr[i]);
            }
        }

        cout << dp[n] << "\n";
    }
    return 0;
}
