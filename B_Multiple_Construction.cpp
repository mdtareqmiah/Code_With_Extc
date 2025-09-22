#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(2 * n, 1);

        // Place numbers from n down to 1
        for (int x = n; x >= 1; x--) {
            for (int i = 2 * n - x - 1; i >= 0; i--) {
                if (arr[i] == 1 && arr[i + x] == 1) {
                    arr[i] = x;
                    arr[i + x] = x;
                    break;
                }
            }
        }

        // Print the array
        for (int i = 0; i < 2 * n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
