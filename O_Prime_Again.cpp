#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long 
const int N=1e7+5;
bitset<N>priems;
vector<int>v;

void sive(){
    priems.set();
    priems[0]=priems[1]=0;
    int lim=sqrt(N+.5);
    for(int i=2; i<=lim; i++){
        if(priems[i]){
            for(int j=i*i; j<N; j++){
                priems[j]=0;
            }
        }
    }
    for(int i=2; i<=N; i++){
        if(priems[i]){
            v.push_back(i);
        }

    }
}



bool density(int n){
    if(n<2) return false;
    for(int u:v){
        if(u*u>n){
            break;
        }
        if(n%u==0){
            return false;
        }
    }
    return true;
}

int32_t main(){
    sive();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=n-1;
        while(!density(x)){
            x--;
        }
        cout<<x<<"\n";
    }
}