#include <bits/stdc++.h>
using namespace std;

const int N = 1004;
vector<vector<int>> priems(N);



void sive(){
    int lim=sqrt(N+0.5);
    for(int i=2; i<=lim; i++){
        if(priems[i].empty()){
            for(int j=i; j<N; j+=i){
                priems[j].push_back(i);
            }
        }
    }
}



int bfs(int s, int t) {
    vector<int> dist(N, -1);
    queue<int> q;
    q.push(s);
    dist[s] = 0;

    while (!q.empty()) {
        int u = q.front(); q.pop();
        if (u == t) return dist[u];

        for (int f : priems[u]) {
            int v = u + f;
            if (v <= t && dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sive();

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        int s, t;
        cin >> s >> t;
        int ans = bfs(s, t);
        cout << "Case " << i << ": " << ans << "\n";
    }

    return 0;
}
