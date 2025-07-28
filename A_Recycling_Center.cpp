#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,c;
        cin>>n>>c;
        vector<ll>v(n);
        for(auto &u:v) cin>>u;
        sort(v.rbegin(), v.rend());
        ll mul =1;
        
        for(int u:v){
            if(u*mul<=c){
                mul*=2;
                n-=1;
            }
        }   
        cout<<n<<"\n";
    }
    return 0;
}