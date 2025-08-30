#include <bits/stdc++.h>
using namespace std;

const int N = 1e7+5;
vector<int> v(N+1, 0);

void precompute() {
    int lim=sqrt(N+0.5);
    for (int i = 1; i <= N/2; i++) {
        for (int j = 2*i; j <= N; j += i) {
            v[j] += i;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    precompute();

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        if (v[n] == n) {
            cout << "perfect\n";
        } else if (v[n] > n) {
            cout << "abundant\n";
        } else {
            cout << "deficient\n";
        }
    }
    return 0;
}
