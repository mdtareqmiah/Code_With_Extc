#include<bits/stdc++.h>
using namespace std;
const int N=1e7+5;
int spf[N];

void spff(){
    for(int i=0; i<=N; i++){
        spf[i]=i;
    }
    int lim=sqrt(N+0.5);
    for(int i=2; i<=lim; i++){
        if(spf[i]==i){
            for(int j=i*i; j<=N; j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    spff();
    int n;
    while(cin>>n && n){
        int x=n;
        cout<<1;
        while(n!=1){
            cout<<" x "<<spf[n];
            n/=spf[n];
        }
        cout<<"\n";
    }
    return 0;    
}
