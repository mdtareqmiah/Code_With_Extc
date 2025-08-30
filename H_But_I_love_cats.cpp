#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5; 
vector<int> adj[N];
int res=0,n,m;
int cat[N];
void dfs(int n, int p, int cons){
    if(cat[n]==1){
        cons++;
    }
    else{
        cons=0;
    }
    if(cons>m){
        return;
    }
    bool flag = true;
    for(auto v:adj[n]){
        if(v!=p){
            flag=false;
            dfs(v,n,cons);
        }
    }
    if(flag){
        res++;
    }
}



int main(){
    //int n,m;
    
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        cin>>cat[i];

    }
    for(int i=1; i<n; i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);

    }
    dfs(1,0,0);
    cout<<res<<"\n";
    return 0;
}
//againsolve to clear concept