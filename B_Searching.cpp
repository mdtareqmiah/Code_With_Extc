#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main(){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll &u:arr) cin>>u;
    ll x;
    cin>>x;
    bool flag =false;
    ll p=0;
    for(int i=0; i<n; i++){
        if(arr[i]==x) {
            flag=true;
            p=i;
            break;
        }
    }
    if(flag){
        cout<<p<<"\n";
    }
    else{
        cout<<-1<<"\n";
    }
    return 0;
}