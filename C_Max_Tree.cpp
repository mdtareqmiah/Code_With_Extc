#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> adj(n+1);
        vector<int> v1(n+1,0);

        for (int i = 0; i < n-1; i++) {
            int u,v; ll x,y;
            cin >> u >> v >> x >> y;
            if (x > y) {
                adj[v].push_back(u);
                v1[u]++;
            } else {
                adj[u].push_back(v);
                v1[v]++;
            }
        }

        // Kahn's topo sort
        queue<int> q;
        for (int i = 1; i <= n; i++) if (v1[i] == 0) q.push(i);
        vector<int> v2;
        v2.reserve(n);
        while (!q.empty()) {
            int v = q.front(); q.pop();
            v2.push_back(v);
            for (int to : adj[v]) {
                v1[to]--;
                if (v1[to] == 0) q.push(to);
            }
        }

        vector<int> p(n+1);
        for (int i = 0; i < (int)v2.size(); i++) {
            p[v2[i]] = i+1;
        }

        for (int i = 1; i <= n; i++) {
            cout << p[i] << (i==n?'\n':' ');
        }
    }
    return 0;
}
