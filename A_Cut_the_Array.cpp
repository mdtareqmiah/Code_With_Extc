#include <bits/stdc++.h>
using namespace std;

int norm(int x) {
    x %= 3;
    if (x < 0) x += 3;
    return x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n+1);
        for (int i=1;i<=n;i++) cin >> v[i];

        vector<int> pref(n+1,0);
        for (int i=1;i<=n;i++) pref[i] = pref[i-1] + v[i];

        bool flag = false;
        int l=0, r=0;
        for (int i=1;i<n && !flag;i++) {
            for (int j=i+1;j<n && !flag;j++) {
                int s1 = norm(pref[i]);
                int s2 = norm(pref[j] - pref[i]);
                int s3 = norm(pref[n] - pref[j]);

                if ((s1==s2 && s2==s3) || (s1!=s2 && s1!=s3 && s2!=s3)) {
                    l=i; r=j;
                    flag = true;
                }
            }
        }
        cout << l << " " << r << "\n";
    }
    return 0;
}
