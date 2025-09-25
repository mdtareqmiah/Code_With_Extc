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
        int neg = 0, zero = 0;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] == -1) neg++;
            else if (v[i] == 0) zero++;
        }

        int res;
        if (neg % 2 == 0) {
            res = zero;
        } else {
            res = zero + 2; 
        }

        cout << res << "\n";
    }

    return 0;
}
