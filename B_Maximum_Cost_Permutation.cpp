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
        vector<int> p(n);
        vector<int> present;
        for (int i = 0; i < n; i++) {
            cin >> p[i];
            if (p[i] != 0) present.push_back(p[i]);
        }

        if (present.empty()) {
            cout << n << "\n";  // all zeros → can force max disorder
            continue;
        }

        int L = *min_element(present.begin(), present.end());
        int R = *max_element(present.begin(), present.end());

        cout << (R - L + 1) << "\n";
    }
    return 0;
}
