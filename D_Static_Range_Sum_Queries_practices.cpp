#include<bits/stdc++.h>
using namespace std;
const int N=1e7+5;
int tree[4*N];
int arr[N];
int n;

void build(int node, int s, int e){
    if(s==e){
        return;
    }
    int mid=(s+e)/2;
    build(2*node, s, mid);
    build(2*node+1, mid+1, e);
    tree[node]=tree[2*node]+tree[2*node+1];
    return ;
}

int query(int l, int r, int node, int s, int e){
    if(e<l || s>r) return 0;
    if(l>=s && r<=e) return tree[node];

    int mid=(s+e)/2;
    return query(l,r,node,s,mid)+query(l,r,node,mid+1,e);
    


}


int main(){
    int 
    return 0;
}