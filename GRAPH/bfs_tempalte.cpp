#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5; // সর্বোচ্চ নোড সংখ্যা
vector<int> adj[N];    // অ্যাডজেসেন্সি লিস্ট
bool visited[N];       // ভিজিটেড চেক করার জন্য অ্যারে

void bfs(int start) {
    queue<int> q;
    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " "; // প্রয়োজনে প্রিন্ট

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; // n = নোড সংখ্যা, m = এজ সংখ্যা
    cin >> n >> m;

    // এজ ইনপুট নেওয়া
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a); // কারণ গ্রাফ আনডিরেক্টেড
    }

    // BFS চালানো
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            cout << "Starting new BFS from node " << i << "\n";
            bfs(i);
        }
    }
}
