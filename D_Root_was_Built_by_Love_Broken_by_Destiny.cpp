#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int MAXN = 200005;

vector<int> graph[MAXN];
int color[MAXN];
bool visited[MAXN];

long long fact[MAXN];

// Fast factorial precomputation
void precompute_factorials() {
    fact[0] = 1;
    for (int i = 1; i < MAXN; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
}

// DFS to check bipartiteness and count nodes in each side
bool dfs(int node, int c, int &cnt0, int &cnt1) {
    visited[node] = true;
    color[node] = c;
    if (c == 0) cnt0++;
    else cnt1++;

    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            if (!dfs(neighbor, c ^ 1, cnt0, cnt1)) return false;
        } else {
            if (color[neighbor] == color[node]) return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    precompute_factorials();

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        // Clear previous test case graph
        for (int i = 1; i <= n; i++) {
            graph[i].clear();
            visited[i] = false;
        }

        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        bool ok = true;
        long long ans = 1;

        for (int i = 1; i <= n; i++) {
            if (!visited[i]) {
                int cnt0 = 0, cnt1 = 0;
                if (!dfs(i, 0, cnt0, cnt1)) {
                    ok = false;
                    break;
                }
                // Multiply by (2 * a! * b!) % MOD
                long long ways = (2LL * fact[cnt0] % MOD) * fact[cnt1] % MOD;
                ans = (ans * ways) % MOD;
            }
        }

        if (!ok) cout << 0 << "\n";
        else cout << ans << "\n";
    }

    return 0;
}
