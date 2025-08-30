#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e18;
const int MX = 100005;

int n, m;
long long dist[MX];
int parent[MX];
vector<pair<int,int>> adj[MX];   // adj[u] -> (v, w)

void dijkstra(int src) {
    for (int i = 1; i <= n; i++) {
        dist[i] = INF;
        parent[i] = -1;
    }
    dist[src] = 0;

    priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<>> pq;
    pq.push({0, src});

    while (!pq.empty()) {
        auto [cost, u] = pq.top(); pq.pop();
        if (cost > dist[u]) continue;

        for (auto [v, w] : adj[u]) {
            long long new_cost = cost + w;
            if (new_cost < dist[v]) {
                dist[v] = new_cost;
                parent[v] = u;
                pq.push({new_cost, v});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    dijkstra(1);

    if (dist[n] == INF) {
        cout << -1 << "\n";
        return 0;
    }

    // path বের করা
    vector<int> path;
    for (int cur = n; cur != -1; cur = parent[cur])
        path.push_back(cur);

    reverse(path.begin(), path.end());

    for (int x : path) cout << x << " ";
    cout << "\n";

    return 0;
}
