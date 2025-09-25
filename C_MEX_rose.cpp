#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }

        vector<int> v1(n+2, 0);
        for (int i = 0; i < n; i++){
            v1[v[i]]++;
        }

        int ct = 0;
        for (int i = 0; i < k; i++) {
            if (v1[i] == 0){
                ct++;
            }
        }

        int res = v1[k];

        cout << max(ct, res) << "\n";
    }

    return 0;
}
