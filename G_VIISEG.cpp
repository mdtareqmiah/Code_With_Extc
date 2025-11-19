// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// const int N=1e7+5;
// ll arr[N];

// struct Node { ll sum, psum, ssum,pssum;};
// Node tree[N*4];
// Node dataa(ll val){
//     Node res;
//     res.sum=val;
//     res.psum=res.ssum=res.pssum=max(0LL,val);
//     return res;
// }

// Node merge(Node l, Node r){
//     Node res;
//     res.sum=l.sum+r.sum;
//     res.psum=max(l.psum, l.sum+r.psum);
//     res.ssum=max(r.ssum, r.sum+l.ssum);
//     res.pssum=max({l.pssum, r.pssum, l.ssum+r.psum});
//     return res;
// }

// void build(int node, int s, int e){
//     if(s==e){
//         tree[node]=dataa(arr[e]);
//         return ;
//     }
//     int mid=(s+e)/2;
//     build(2*node, s, mid);
//     build(2*node+1, mid+1,e);
//     tree[node]=merge(tree[2*node],tree[2*node+1]);
//     return;
// }

// void update(int indx, int val, int node, int s, int e){
//     if(s==e){
//         tree[node]=dataa(val);
//         return;
//     }
//     int mid=(s+e)/2;
//     if(indx<=mid) update(indx, val, 2*node, s, mid);
//     else update(indx, val, 2*node+1, mid+1, e);
//     tree[node]=merge(tree[2*node],tree[2*node+1]);
//     return;
// }

// int main(){

//     int n,m;
//     cin>>n>>m;
//     for(int i=1; i<=n; i++){
//         cin>>arr[i];
//     }

//     build(1,1,n);

//     while(m--){
//         ll k,x;
//         cin>>k>>x;
//         update(k,x,1,1,n);
//         cout<<tree[1].pssum<<"\n";
//     }
// https://www.youtube.com/watch?v=ZiqtPF8eimg
// }


// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long 

// const int N=1e5+5;
// ll arr[N];
// struct Node{ ll sum, psum,ssum, pssum;};

// Node tree[4*N];

// Node dataa(ll val){
//     Node res;
//     res.sum=val;
//     res.psum=res.ssum=res.pssum=max(0LL,val);
//     return res;
// }


// Node merge(Node l, Node r){
//     Node res;
//     res.sum=l.sum+r.sum;
//     res.psum=max(l.psum, l.sum+r.psum);
//     res.ssum=max(r.ssum, r.sum+l.ssum);
//     res.pssum=max({l.pssum, r.pssum, r.psum+l.ssum});
//     return res;

// }

// void build(int node, int s, int e){
//     if(s==e){
//         tree[node]=dataa(arr[e]);
//         return;
//     }
//     int mid=(s+e)/2;
//     build(2*node, s, mid);
//     build(2*node+1, mid+1, e);
//     tree[node]=merge(tree[2*node], tree[2*node+1]);
//     return;
// }

// void update(int indx, int val, int node, int s, int e){
//     if(s==e){
//         tree[node]=dataa(val);
//         return;
//     }
//     int mid=(s+e)/2;
//     if(indx<=mid) update(indx, val, 2*node, s, mid);
//     else update(indx, val, 2*node+1, mid+1, e);
//     tree[node]=merge(tree[2*node], tree[2*node+1]);

// }
// int main(){
//     int n,m;
//     cin>>n>>m;
//     for(int i=1; i<=n; i++){
//         cin>>arr[i];

//     }
//     build(1,1,n);
//     while(m--){
//         ll k,x;
//         cin>>k>>x;
//         update(k,x,1,1,n);
//         cout<<tree[1].pssum<<"\n";
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N=1e7+5;
ll arr[N];

struct nodee{ll sum, psum, ssum, pssum;};
nodee tree[N*4];

nodee dataa(ll val){
    nodee res;
    res.sum=val;
    res.psum=res.ssum=res.pssum=max(0LL, val);
    return res;
}

nodee merge(nodee l, nodee r){
    nodee res;
    res.sum=l.sum+r.sum;
    res.psum=max(l.psum, l.sum+r.psum);
    res.ssum=max(r.ssum, r.sum+l.ssum);
    res.pssum=max({l.pssum, r.pssum, l.ssum+r.psum});
    return res;
}

void build(int node, int s, int e){
    if(s==e){
        tree[node]=dataa(arr[e]);
        return;
    }
    int mid=(s+e)/2;
    build(2*node, s, mid);
    build(2*node+1, mid+1, e);
    tree[node]=merge(tree[2*node], tree[2*node+1]);
    return;
}

void update(int indx, int val, int node, int s, int e){
    if(s==e){
        tree[node]=dataa(val);
        return;
    }
    int mid=(s+e)/2;
    if(indx<=mid) update(indx, val, 2*node, s, mid);
    else update(indx, val, 2*node+1, mid+1, e);
    tree[node]=merge(tree[2*node], tree[2*node+1]);
    return;
}

int main(){
    int n, m;
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    build(1,1,n);
    while(m--){
        int k,x;
        cin>>k>>x;
        update(k,x,1,1,n);
        cout<<tree[1].pssum<<"\n";
    }
    return 0;
}

