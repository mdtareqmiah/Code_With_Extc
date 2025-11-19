#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll fun(ll x){
    ll res=1;
    while(x!=1){
        if(x%2==0){
            res++;
            x/=2;
        }
        else{
            res++;
            x*=3;
            x+=1;
        }
    }
    return res;
}

int main(){
    int a,b;
    while(cin>>a>>b){
        ll y=0;
        ll m=a,n=b;
        if(m>n){
            swap(m,n);
        }
        
        for(int i=m; i<=n; i++){
            y=max(y,fun(i));
        }
       cout<<a<<" "<<b<<" "<<y<<"\n";
        
    }
    return 0;
}