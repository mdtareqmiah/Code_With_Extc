#include<bits/stdc++.h>
using namespace std;
const int N=1e7+5;
int n;
int arr[N];
int tree[4*N];

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
    if(e<l || s>r) return 0;
    if(s>=l && e<=r) return tree[node];
    int mid=(s+e)/2;
    return query(l,r,2*node,s,mid)+query(l,r,2*node+1,mid+1, e);

}

int main(){
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>n;
        for(int i=1; i<=n; i++) cin>>arr[i];
        build(1,1,n);
        string s;
        int a,b;
        //cin>>s;
        cout<<"Case "<<i<<":\n";
        while(cin>>s && s!="End"){

            cin>>a>>b;
            
            if(s=="Query"){
                cout<<query(a,b,1,1,n)<<"\n";
    
            }
            else if(s=="Add"){
                arr[a]+=b;
                //build(1,1,n);
                update(a,arr[a],1,1,n);
            }
            else if(s=="Sub"){
                arr[a]-=b;
                //build(1,1,n);
                update(a,arr[a],1,1,n);
            }
        }
        
    }
}