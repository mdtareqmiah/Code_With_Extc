#include<bits/stdc++.h>
using namespace std;
#define mx 100005
int viz[]={-1}, prnt[mx]={-1};
vector<vector<int>>adj;

void bfs(int s, int n){
    queue<int>q;
    q.push(s);
    viz[s]=0;
    prnt[s]=0;

    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto v:adj[u]){
            if(viz[v]==-1){
                prnt[v]=u;
                viz[v]=viz[u]+1;
                q.push(v);
            }
        }
    }

}

int main(){
    

    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs(1,n);

    if(viz[n]==-1){
        cout<<"IMPOSSIBLE\n";

    }
    else{
        vector<int>path;
        int curr=n;
        while(curr!=-1){
            path.push_back(curr);
            curr=prnt[curr];
        }
        cout<<path.size()<<"\n";

        for(int v:path) cout<<v<<" ";

        cout<<"\n";
    }
    return 0;
}