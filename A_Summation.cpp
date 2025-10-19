#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main(){
    ll n;
    cin>>n;
    ll arr[n];
    ll sum=0;
    for(ll &u:arr) cin>>u, sum+=u;
    cout<<abs(sum)<<"\n";

    return 0;
}