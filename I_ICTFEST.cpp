#include<bits/stdc++.h>
using namespace std;
const int N=1e7+5;
int tree[4*N];
int arr[N];
int n;

void build(int node, int s, int e){
    if(s==e){
        tree[node]=1;
        return;
    }
    int mid=(s+e)/2;
    build(2*node, s, mid);
    build(2*node+1, mid+1,e);
    tree[node]=tree[2*node]+tree[2*node+1];
    return;
}

void update(int indx, int node, int s, int e){
    if(s==e){
        tree[node]=0;
        return;
    }
    int mid=(s+e)/2;

    if(indx<=mid){
        update(indx, 2*node, s,mid);
    }
    else{
        update(indx, 2*node+1, mid+1,e);
    }
    tree[node]=tree[2*node]+tree[2*node+1];
    return;
}

int query(int val, int node, int s, int e){
    if(s==e){
        return s;

    }
    int mid=(s+e)/2;

    if(val<=tree[2*node]){
        return query(val, 2*node, s, mid);
    }
    else{
        return query(val-tree[node*2], 2*node+1,mid+1,e);
    }
}
int main(){
    
    cin>>n;
    for(int i=1; i<=n; i++) cin>>arr[i];
    build(1,1,n);
    for(int i=1; i<=n; i++){
        int p;
        cin>>p;
        int res=query(p,1,1,n);
        cout<<arr[res]<<" ";
        update(res,1,1,n);
    }
    cout<<"\n";
}