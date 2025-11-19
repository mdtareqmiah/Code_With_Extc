#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<ll>v(n), v1(m);
        for(auto &u:v) cin>>u;
        for(auto &u:v1) cin>>u;

        sort(v.begin(), v.end());
        sort(v1.begin(), v1.end());

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(v1[j]!=0){
                    if(v1[j]<v[i]){
                        v1[j]=0;
                        v[i]=0;
                    }
                }
                
            }
        }
        bool flag=false;
        for(int i=0; i<n; i++){
            if(v[i]!=0){
                flag=true;
                break;
            }
        }
        if(!flag){
            cout<<"Yes\n";

        }
        else{
            cout<<"No\n";
        }

    }
    return 0;
}