#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,m,x,y;
        cin>>n>>m>>x>>y;
        ll a=x+y-m;
        ll b=x-y+m;
        if(a<0 || b<0 || (a%2) || (b%2)){
            cout<<-1<<"\n";
            continue;
        }
        ll p=a/2;
        ll q=b/2;
        if(p<0 || p>n || q<0 || q>m){
            cout<<-1<<"\n";
        }
        else{
            if(p+q !=x || p+m-q!=y){
                cout<<-1<<"\n";
            }
            else{
                cout<<p<<" "<<q<<"\n";
            }
        }
    }
    return 0;
}