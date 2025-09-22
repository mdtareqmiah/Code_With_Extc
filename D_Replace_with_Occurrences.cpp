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
        vector<int> b(n);
        for (int i = 0; i < n; i++) cin >> b[i];

        map<int, vector<int>> freq_to_indices;
        for (int i = 0; i < n; i++) {
            freq_to_indices[b[i]].push_back(i);
        }

        vector<int> a(n);
        int current = 1;
        bool possible = true;

        // Use iterator instead of structured binding
        for (auto it = freq_to_indices.begin(); it != freq_to_indices.end(); ++it) {
            int freq = it->first;
            vector<int> &indices = it->second;

            if (indices.size() % freq != 0) {
                possible = false;
                break;
            }

            int count = 0;
            for (int idx : indices) {
                a[idx] = current + count % freq;
                count++;
            }
            current += freq;
        }

        if (!possible) {
            cout << -1 << "\n";
        } else {
            for (int i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
