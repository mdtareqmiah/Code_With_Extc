#include <bits/stdc++.h>
using namespace std;

int n, m, ans;
vector<pair<int, int>> edges;

void dfs(int i, vector<int>& deg, vector<int>& par, vector<bool>& cyc, int cnt) {
    if (i == m) {
        ans = max(ans, cnt);
        return;
    }

    auto [u, v] = edges[i];
    // try skipping this edge
    dfs(i + 1, deg, par, cyc, cnt);

    if (deg[u] == 2 || deg[v] == 2) return;

    int pu = par[u], pv = par[v];
    while (pu != par[pu]) pu = par[pu];
    while (pv != par[pv]) pv = par[pv];

    if (pu == pv && cyc[pu]) return;

    vector<int> old_par = par;
    vector<bool> old_cyc = cyc;

    deg[u]++;
    deg[v]++;

    if (pu == pv) cyc[pu] = true;
    else {
        par[pu] = pv;
        cyc[pv] = cyc[pv] || cyc[pu];
    }

    dfs(i + 1, deg, par, cyc, cnt + 1);

    deg[u]--;
    deg[v]--;
    par = old_par;
    cyc = old_cyc;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        edges.clear();
        for (int i = 0; i < m; ++i) {
            int u, v;
            cin >> u >> v;
            --u; --v;
            edges.emplace_back(u, v);
        }

        ans = 0;
        vector<int> deg(n, 0), par(n);
        iota(par.begin(), par.end(), 0);
        vector<bool> cyc(n, false);
        dfs(0, deg, par, cyc, 0);
        cout << ans << "\n";
    }
}
