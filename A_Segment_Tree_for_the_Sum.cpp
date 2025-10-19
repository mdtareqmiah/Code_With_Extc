#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+5;
int n,m;
int tree[N*4];
int arr[N];
void build(int node, int s, int e){
    if(s==e){
        tree[node]=arr[s];
        return;
    }
    int mid=(s+e)/2;
    build(2*node, s, mid);
    build(2*node+1, mid+1, e);
    tree[node]=tree[2*node]+tree[2*node+1];
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
    if(r < s || l > e) return 0;
    if(l <= s && e <= r) return tree[node];
    int mid=(e+s)/2;
    return query(l,r,2*node, s, mid)+query(l,r,2*node+1, mid+1, e);

}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    build(1,0,n-1);
    while(m--){
        int a,b;
        int c;
        cin>>a>>b>>c;
        if(a==1){  
            update(b,c,1,0,n-1);
        }
        else{
            cout<<query(b,c-1,1,0,n-1)<<"\n";
            //continue;
        }
    }
    return 0;
}


