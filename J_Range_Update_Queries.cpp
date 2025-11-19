#include<bits/stdc++.h>
using namespace std;
const int N=1e7+5;
int n;
//int tree[4*N];
int arr[N];
struct pr{
    int sum;
    int lz;
    pr(){
        sum=lz=0;
    }
};
pr.tree[4*N];

void build(int node, int s, int e){
    if(s==e){
        tree[node]=arr[e];
        return;
    }
    int mid=(s+e)/2;
    build(2*node,s,mid);
    build(2*node+1,mid+1,e);
    tree[node]=tree[2*node]+tree[2*node+1];
    return;
}
void push_down(int node, int s, int e){
    if(s!=e){
        int l=2*node;
        int r=l+1;
        tree[l].lz+=tree[node].lz;
        tree[r].lz+=tree[node].lz;
        int mid=(s+e)/2;
        tree[l].sum+=(mid-(s+1))*tree[node].lz;
        tree[r].sum+=(e-(mid+1)+1)*tree[node].lz;
    }
    tree[node].lz=0;
}
int query(int l, int r, int node, int s, int e){
    if(tree[node].lz!=0){
        push_down(node, s,e);
    }
    if(s>r||e<l) return 0;
    if(s>=l && e<=r) return tree[node].sum;

    
}