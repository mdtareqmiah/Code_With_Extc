#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int n,m;
vector<vector<int>>adj;


int main(){
    cin>>n>>m;
    adj=vector<vector<int>>(n);
    for(int i=1; i<n; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        
    }
    return 0;
}