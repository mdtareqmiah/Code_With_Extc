#include<bits/stdc++.h>
#define int long long int

using namespace std;

int32_t main(){
    int n, q, m;
    cin >> n >> q >> m;
    vector<int> v(n+1);
    vector<int>v1(n+1);
    for(int i = 1; i <= n; i++) cin >> v [i];
    v1=v;

    while(q--){
        int l, r, d;
        cin >> l >> r >> d;
        // if(l<=n){
        //     v[l]+=d;
        // }

        // int x=r+1;
        // if(x<=n+1){
        //     v[x]-=d;
        // }
        for(int i=l; i<=r; i++){
            v1[i]+=d;
        }

        // for(int i=1; i<=n; i++){
        //     v1[i]=v1[i-1]+v[i];
        // }

    }
    sort(v1.rbegin(), v1.rend());
    //for( auto u:v1) cout<<u<<" ";
    while(m--){
        int p;
        cin>>p;
        cout<<v1[p-1]<<"\n";
    }

    return 0;
}