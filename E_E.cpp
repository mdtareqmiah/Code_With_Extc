#include<bits/stdc++.h>
using namespace std;
using ll=long long;

vector<int>bfs(int s, vector<vector<int>>& v){
    int sz=v.size()-1;
    vector<int>dist(sz+1,-1);
    queue<int>q;
    dist[sz]=0;
    while(!q.empty()){
        int x=q.front();
        q.pop();
        for(auto u:v[x]){
            if(dist[u]==-1){
                dist[u]=dist[x]+1;
                q.push(u);
            }
        }
    }
    return dist;
}
vector<ll>cost;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,a,b,c;
        cin>>n>>m>>a>>b>>c;
        cost=vector<ll>(m+1);
        for(auto &u:cost) cin>>cost[u];
        sort(cost.begin()+1, cost.end());

        vector<vector<int>>v(n+1);
        for(int i=0; i<m; i++){
            int x,y;
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        auto xa=bfs(a,v);
        auto xb=bfs(b,v);
        auto xc=bfs(c,v);

        ll res=200000000000;
        for(int i=1; i<=n; i++){
            int tot=xa[i]+xb[i]+xc[i];
            int stot=xb[i];

            ll cost=0;
            int ct=0;
            
        }
    }
}



