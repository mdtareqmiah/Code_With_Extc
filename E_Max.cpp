#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll &u:arr) cin>>u;
    ll mx=LLONG_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    cout<<mx<<"\n";
    return 0;
}