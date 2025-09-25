#include <bits/stdc++.h>
using namespace std;
//using int64 = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--) {
        long long n;
        cin >> n;
        long long base = (n / 8) * 2;
        int rem = (int)(n % 8);
        int x = 0;
        if (rem >= 6) x++;
        if (rem >= 7) x++;
        long long bad = base + x;
        long long ans = n - bad;
        cout << ans << '\n';
    }
    return 0;
}
