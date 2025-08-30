#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e7+5;
bitset<N>prims;
vector<pair<int,int>>check;


void sive(){
    prims.set();
    prims[0]=prims[1]=0;
    int lim=sqrt(N+0.5);
    for(int i=2; i<=lim; i++){
        if(prims[i]){
            for(int j=i*i; j<N; j+=i){
                prims[j]=0;
            }
        }
    }
    //for(auto v:prims) cout<<v<<" ";
    for(int i=3; i+2<=N; i++){
        if(prims[i] && prims[i+2]){
            check.push_back({i,i+2});
        }
    }
    
}  
int32_t main(){
    sive();
    int n;
    while(cin>>n){
        cout<<"("<<check[n-1].first<<", "<<check[n-1].second<<")\n";
    }
    return 0;
}