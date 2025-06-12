#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>v(n);
        for(auto &u:v) cin>>u;
        if(v[0]==1){
            cout<<"YES\n";

        }
        else{
            cout<<"NO\n";
        }
    }
}