#include<bits/stdc++.h>
using namespace std;
#define ll long long;
ll binpow(ll a, ll b){
    if(b==0) 
        return 1;
    ll res=binpow(a,b/2);
    if(b%2)
        return res*res*a;
    else
    
}
int main(){

    return 0;
}