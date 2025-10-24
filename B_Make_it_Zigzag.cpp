#include <bits/stdc++.h>
using namespace std;

// Function to compute total decrease cost for a given peak pattern
long long compute_cost(const vector<long long>& a, bool peaks_even) {
    int n = a.size();
    long long cost = 0;

    for (int i = 0; i < n; i++) {
        bool is_peak = peaks_even ? (i % 2 == 1) : (i % 2 == 0);
        if (is_peak) {
            long long left = (i > 0 ? a[i - 1] : 0);
            long long right = (i + 1 < n ? a[i + 1] : 0);
            long long needed = max(left, right) + 1;
            if (a[i] < needed) {
                cost += needed - a[i];
            }
        }
    }

    return cost;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        // Compute cost for both peak patterns
        long long cost_even_peaks = compute_cost(a, true);  // peaks at even indices
        long long cost_odd_peaks = compute_cost(a, false);  // peaks at odd indices

        cout << min(cost_even_peaks, cost_odd_peaks) << "\n";
    }

    return 0;
}
