#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>adj;
int dist_n, mx_dist;

void dfs(int u, int p=-1, int dis=0){
    if(dis>mx_dist){
        mx_dist=dis;
        dist_n=u;
    }
    for(auto v:adj[u]){
        if(v!=p){
            dfs(v,u,dis+1);
        }
    }
}

int main(){
    int n;
    cin>>n;
    adj=vector<vector<int>>(n+1);
    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);

    }

    mx_dist=dist_n=-1;
    dfs(1);
    mx_dist=-1;
    dfs(dist_n);
    cout<<mx_dist<<"\n";

}