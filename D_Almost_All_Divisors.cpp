#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>v(n);
        for(auto &u:v) cin>>u;
        sort(v.begin(), v.end());
        ll x=v[0]*v[n-1];
        vector<ll>v1;
        for(int i=2; i*i<=x; i++){
            if(x%i==0){
                v1.push_back(i);
                if(i!=x/i){
                    v1.push_back(x/i);
                }
            }
        }
        sort(v1.begin(), v1.end());
        if(v1==v){
            cout<<x<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
    }
    return 0;
}