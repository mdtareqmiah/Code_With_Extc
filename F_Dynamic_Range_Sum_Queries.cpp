#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const ll N=1e7+5;
ll n,q;
ll tree[4*N];
ll arr[N];
void build(ll node, ll s, ll e){
    if(s==e){
        tree[node]=arr[s];
        return;
    }
    ll mid=(s+e)/2;
    build(2*node,s,mid);
    build(2*node+1,mid+1,e);
    tree[node]=tree[2*node]+tree[2*node+1];
    return;
}
void update(ll indx, ll val, ll node, ll s, ll e){
    if(s==e){
        tree[node]=val;
        return;
    }
    ll mid=(s+e)/2;
    if(indx<=mid) update(indx,val,2*node,s,mid);
    else update(indx,val,2*node+1, mid+1,e);
    tree[node]=tree[2*node]+tree[2*node+1];
    return;
}

ll query(ll l, ll r, ll node, ll s, ll e){
    if(r<s || l>e) return 0;
    if(l<=s && e<=r) return tree[node];
    ll mid=(s+e)/2;
    return query(l,r,2*node,s,mid)+query(l,r,2*node+1,mid+1,e);
}

int main(){
    cin>>n>>q;
    for(ll i=1; i<=n; i++){
        cin>>arr[i];
    }
    build(1,1,n);
    while(q--){
        ll a,b,c;
        cin>>a>>b>>c;
        if(a==1){
            update(b,c,1,1,n);
        }
        else{
            cout<<query(b,c,1,1,n)<<"\n";
        }
    }
}


//gffdsaqwertyuiopkmnbhgvcfdxszaqwsaqwedfryhgjkiuloplmnjkoiuyh
//ghgkjhy