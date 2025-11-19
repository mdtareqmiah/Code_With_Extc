

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string mode;
    cin >> mode;

    if (mode == "first") {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        string s = "";
        for (int x : a) {
            s += char('a' + x - 1);
        }

        cout << s << "\n";
    } 
    else if (mode == "second") {
        string s;
        cin >> s;

        int n = s.size();
        cout << n << "\n";
        for (char c : s) {
            cout << (c - 'a' + 1) << " ";
        }
        cout << "\n";
    }

    return 0;
}