#include <bits/stdc++.h>
using namespace std;

void solve() {
    
}

int main() {
    
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        map<int,int> freq;
        for (int x : a) freq[x]++;

        vector<int> v;
        for (auto &p : freq) v.push_back(p.second);

        int ans = 0;
        int mx = *max_element(v.begin(), v.end());

        for (int i = 1; i <= mx; i++) {
            int cnt = 0;
            for (int u : v) if (u >= i) cnt++;
            ans = max(ans, cnt * i);
        }

        cout << ans << "\n";
    }
    return 0;
}
