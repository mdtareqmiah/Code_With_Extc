#include<bits/stdc++.h>
using namespace std;
#define int long long 
const int N=1e6+5;
vector<int>dibc(N,0);
void dibba(){
    for(int i=1; i<=N; i++){
        for(int j=i*2; j<=N; j+=i){
            dibc[j]+=i;
        }
    }
}

int32_t main(){
    dibba();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<dibc[n]<<"\n";
    }
    return 0;
}