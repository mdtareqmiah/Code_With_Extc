#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const ll N=1e7+5;
ll tree[4*N];
ll arr[N];

void build(int node, int s, int e){
    if(s==e){
        tree[node]=arr[s];
        return;
    }
    int mid=(s+e)/2;
    build(2*node, s, mid);
    build(2*node+1, mid+1,e);
    tree[node]=min(tree[2*node], tree[2*node+1]);
    return;
}


void update(int indx, int val, int node, int s, int e){
    if(s==e){
        tree[node]=val;
        return;

    }
    int mid=(s+e)/2;
    if(indx<=mid) update(indx, val, 2*node, s, mid);
    else update(indx, val, 2*node+1, mid+1,e);
    tree[node]=tree[2*node]+tree[2*node+1];
    return;
}

int query(int l, int r, int node, int s, int e){
    if(r<l || l>e) return 0;
    if(l<=s && r<=e) return tree[node];
    int mid=(s+e)/2;
    return query(l,r,2*node,s,mid)+query(l,r,2*node+1)
}

