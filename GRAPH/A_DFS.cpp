#include<bits/stdc++.h>
using namespace std;
const int N =1e5+5;
vector<int>adj[N];
bool viz[N]; //globally all are false

void dfs(int n){
    viz[n]=true;
    for(int u:adj[n]){
        if(!viz[u]){
            dfs(u);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);

    }
    vector<int>v;
    for(int i=1; i<=n; i++){
        if(!viz[i]){
            v.push_back(i);
            dfs(i);
        }
    }
    int sz=v.size();
    cout<<sz-1<<"\n";
    for(int i=1; i<sz; i++){
        cout<<v[i-1]<<" "<<v[i]<<"\n";
    }

}