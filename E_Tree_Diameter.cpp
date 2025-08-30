#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>adj;
int mx_dis, dist_node;

void dfs(int u, int p=-1, int dist=0){
    if(dist>mx_dis){
        mx_dis=dist;
        dist_node=u;
    }
    for(auto v:adj[u]){

        if(v!=p){
            dfs(v,u,dist+1);
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
     mx_dis=dist_node=-1;
    
    dfs(1);
    mx_dis=-1;
    dfs(dist_node);
    cout<<mx_dis<<"\n";


    return 0;

}