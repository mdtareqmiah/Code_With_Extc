#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &s) {
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (isPalindrome(s)) {
            cout << 0 << "\n"; // no need to remove anything
            continue;
        }

        // Try removing leading zeros
        vector<int> p;
        for (int i = 0; i < n && s[i] == '0'; i++)
            p.push_back(i + 1);

        if (p.empty()) {
            // otherwise remove trailing ones
            for (int i = n - 1; i >= 0 && s[i] == '1'; i--)
                p.push_back(i + 1);
            reverse(p.begin(), p.end());
        }

        if (p.empty()) {
            cout << -1 << "\n";
        } else {
            cout << p.size() << "\n";
            for (int i = 0; i < (int)p.size(); i++) {
                cout << p[i] << (i + 1 == p.size() ? '\n' : ' ');
            }
        }
    }
    return 0;
}
