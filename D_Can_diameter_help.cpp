// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>>adj;
// int dist_n, mx_dist;
// vector<int>count_dist;

// void dfs(int u, int p, int dis){

//     if(dis>mx_dist){
//         mx_dist=dis;
//         dist_n=u;
//     }

//     // if(u==p){
//     //     dis=0;
//     // }
//     for(auto v:adj[u]){
//         if(v!=p){
//             dfs(v,u,dis+1);
//         }
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     adj=vector<vector<int>>(n+1);
//     for(int i=0; i<n; i++){
//         int a,b;
//         cin>>a>>b;
//         adj[a].push_back(b);
//         adj[b].push_back(a);

//     }

//     dist_n=-1;
//     for(int i=1; i<=n; i++){
//         //dfs(i);
//         mx_dist=-1;
//         dfs(i,-1,0);
//         cout<<mx_dist<<" ";
//         //dist_n++;
//     }

// }

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<long long> dis1, dis2;
int n;

pair<int, long long> dfs(int u, int p, vector<long long> &dist) {
    pair<int, long long> farthest = {u, dist[u]}; // {node, distance}
    for (auto v : adj[u]) {
        if (v != p) {
            dist[v] = dist[u] + 1;
            auto tmp = dfs(v, u, dist);
            if (tmp.second > farthest.second)
                farthest = tmp;
        }
    }
    return farthest;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    adj.resize(n + 1);
    dis1.assign(n + 1, 0);
    dis2.assign(n + 1, 0);

    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // First DFS from node 1 to find one end of the diameter
    auto far1 = dfs(1, 0, dis1);

    // Second DFS from far1.first to get distances from one end
    dis1.assign(n + 1, 0);
    dis1[far1.first] = 0;
    auto far2 = dfs(far1.first, 0, dis1);

    // Third DFS from far2.first to get distances from the other end
    dis2.assign(n + 1, 0);
    dis2[far2.first] = 0;
    dfs(far2.first, 0, dis2);

    // Compute maximum distance for each node
    for (int i = 1; i <= n; i++) {
        cout << max(dis1[i], dis2[i]) << " ";
    }
    cout << "\n";

    return 0;
}
