#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5; // সর্বোচ্চ নোড সংখ্যা
vector<int> adj[N];    // অ্যাডজেসেন্সি লিস্ট
bool visited[N];       // ভিজিটেড চেক করার জন্য অ্যারে

void dfs(int node) {
    visited[node] = true; // এই নোডকে ভিজিটেড মার্ক করা
    
    // এর সাথে কানেক্টেড সব নোড ঘুরে দেখা
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor); // যদি ভিজিটেড না হয়, রিকার্সিভলি DFS চালাও
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

    // DFS চালানো
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            cout << "Starting new DFS from node " << i << "\n";
            dfs(i);
        }
    }
}
