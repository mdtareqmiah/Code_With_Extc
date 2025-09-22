#include<bits/stdc++.h>
using namespace std;
using ll =long long;
const int N=2*1e5+5;
int n,q;
ll tree[4*N];
ll arr[N];
void build(int node, int s, int e){
    if(s==e){
      tree[node]=arr[s];  
      return;
    } 
    int mid=(s+e)/2;
    build(2*node,s,mid);
    build(2*node+1,mid+1,e);
    tree[node]=tree[2*node]+tree[2*node+1];
    return;
}

ll querry(int l, int r, int node, int s, int e){
    if(e<l || s>r) return 0;
    if(s>=l && e<=r) return tree[node];
    int mid=(e+s)/2;
    return querry(l,r,2*node,s,mid)+querry(l,r,2*node+1,mid+1,e);

}

int main(){

    cin>>n>>q;

    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }

    build(1,1,n);

    while(q--){
        int a,b;
        cin>>a>>b;
        cout<<querry(a,b,1,1,n)<<"\n";
    }

    return 0;
}