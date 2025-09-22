#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n+1), v1(n+1);
        for(int i=1; i<=n; i++){
            cin>>v[i];
        }
        for(int i=1; i<=n; i++){
            cin>>v1[i];
        }
        vector<vector<int>>bp(n+1, vector<int>(2,0));

        bp[1][0]=1;
        bp[1][1]=1;
        for(int i=2; i<=n; i++){
            if(v[i-1]<=v[i]&&v1[i-1]<=v1[i]){
                bp[i][0]=(bp[i][0]+bp[i-1][0])%mod;
            }
            if(v[i-1]<=v1[i]&&v1[i-1]<=v[i]){
                bp[i][1]=(bp[i][1]+bp[i-1][0])%mod;
            }
            if(v1[i-1]<=v[i]&&v[i-1]<=v1[i]){
                bp[i][0]=(bp[i][0]+bp[i-1][1])%mod;
            }
            if(v1[i-1]<=v1[i]&&v[i-1]<=v[i]){
                bp[i][1]=(bp[i][1]+bp[i-1][1])%mod;
            }
        }
        int res=(bp[n][0]+bp[n][1])%mod;
        cout<<res<<"\n";
    }

    return 0;
}