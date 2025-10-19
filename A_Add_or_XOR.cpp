#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,x,y;
        cin>>a>>b>>x>>y;
        if(a==b){
            cout<<0<<"\n";
        }
        else if(a<b){
            ll n=b-a;
            ll ct;
            if(a%2==0){
                ct=(n+1)/2;
            }
            else{
                ct=n/2;
            }
            ll cost=ct*min(x,y)+(n-ct)*x;
            cout<<cost<<"\n";
        }
        else{
            if(a%2==0){
                cout<<-1<<"\n";
            }
            else{
                if(a==b+1){
                    cout<<y<<"\n";
                }
                else{
                    cout<<-1<<"\n";
                }
            }
        }
    }
    return 0;
}
