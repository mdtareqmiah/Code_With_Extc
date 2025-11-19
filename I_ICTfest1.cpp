#include<bits/stdc++.h>
using namespacestd;
const int N=1E7+5;
#define ll long long 
ll arr[N];

void build(int node, int s, int e){
    if(s==e){
        tree[node]=1;
        return;
    }
    int mid=(s+e)/2;
    build(2*node,s,mid);
    build(2*node+1,mid+1,e);
    tree[node]=tree[2*node]+tree[2*node+1];
    return;
}

void update(int indx, int node, int s, int e){
    if(s==e){
        tree[node]=0;
        return;
    }
    int mid=(s+e)/2;
    if(indx<=mid) update(indx, 2*node, s, mid);
    else update(indx, 2*node+1, mid+1, e);
    tree[node]=tree[2*node]+tree[2*node+1];
    return;
}

int queri(int val, int node, int s, int e){
    if(s==e){
        return s;

    }
    int mid=(s+e)/2;
    if(val<=tree[2*node]) return queri(val,2*node,s, mid);
    else return queri(val-tree[2*node], 2*node+1, mid+1,e);
    //tree[node]=tree[2*node]+tree[2*node+1];
    
}

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) cin>>arr[i];
    build(1,1,n);
    for(int i=1; i<=n; i++){
        int p;
        cin>>p;
        int res=queri(p,1,1,n);
        cout<<arr[res]<<" ";
        update(res,1,1,n);
    }
    return 0;
}
