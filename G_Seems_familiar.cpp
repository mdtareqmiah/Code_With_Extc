#include <bits/stdc++.h>
using namespace std;
#define int long long
const int inf = 1e18;

int32_t main() {
    int n, m, q;
    cin >> n >> m >> q;

    vector<vector<int>> dist(n+1, vector<int>(n+1, inf));
    for(int i=1;i<=n;i++) dist[i][i]=0;

    for(int i=0;i<m;i++){
        int a,b,c;
        cin >> a >> b >> c;
        dist[a][b] = min(dist[a][b], c);
        dist[b][a] = min(dist[b][a], c); 
    }

    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(dist[i][k] < inf && dist[k][j] < inf)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    while(q--){
        int u,v;
        cin >> u >> v;
        if(dist[u][v] >= inf) cout << -1 << "\n";
        else cout << dist[u][v] << "\n";
    }

    return 0;
}
