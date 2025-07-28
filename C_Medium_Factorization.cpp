#include<bits/stdc++.h>
#define ll long long
using namespace std;
//smallest priome factor
const int maxi=1e7+5;
ll spf[maxi];


void spff(){
    for(int i=0; i<=maxi; i++){
        spf[i]=i;
    }

    int lim=sqrt(maxi+0.5);
    for(int i=2; i<lim; i++){
        if(spf[i]==i){
            for(int j=i*i; j<=maxi; j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
}


int main(){
    spff();
    int n;
    while(cin>>n){
        int x=n;
        vector<int>v;
        while(n!=1){
            v.push_back(spf[n]);
            n/=spf[n];
        }
        // for(auto u:v){
        //     cout<<u<<" ";
        // }
        // cout<<"\n";
        if(x==1){
            cout<<1<<"\n";
         }
        else{
            cout<<"1 x ";
            for(int i=0; i<v.size(); i++){
                cout<<v[i]; 
                if(i!=(v.size()-1)){
                    cout<<" x ";
                }
            }
            cout<<"\n";
        }
    }
    

    return 0;
}