#include<bits/stdc++.h>
using namespace std;
using ll =long long;
const int N=2*1e5+5;
int n,q;
ll arr[N], tree[4*N];

void build(int node, int s, int e){
    if(s==e){
        tree[node]=arr[s];
        return;
    }
    int mid=(s+e)/2;
    build(2*node,s,mid);
    build(2*node+1,mid+1,e);
    tree[node]=max(tree[2*node],tree[2*node+1]);
    return;
}

void update(int indx, int val, int node, int s, int e){
    if(s==e){
        tree[node]=val;
        return;
    }
    int mid=(s+e)/2;
    if(indx<=mid) update(indx,val,2*node,s,mid);
    else update(indx, val, 2*node+1, mid+1,e);
    tree[node]=max(tree[2*node],tree[2*node+1]);
    return;
}

ll querry(int l, int r, int node, int s, int e){
    if(e<l || s>r) return LLONG_MIN;
    if(s>=l && e<=r) return tree[node];
    int mid=(s+e)/2;
    return max(querry(l,r,2*node,s,mid),querry(l,r,2*node+1,mid+1,e));

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while(cin>>n>>q){
        //cin>>n>>q;
        for(int i=1; i<=n; i++){
            cin>>arr[i];
        }
        build(1,1,n);
        while(q--){
            char c;
            int a,b;
            cin>>c>>a>>b;
            if(c=='U'){
                update(a,b,1,1,n);
                //build(1,1,n);
                continue;
            }
            cout<<querry(a,b,1,1,n)<<"\n";
        }
    }
    return 0;
}