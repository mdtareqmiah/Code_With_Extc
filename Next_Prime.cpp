#include<bits/stdc++.h>
#define int long long 
using namespace std;

const int N=1e7+5;
bitset<N> priems;
vector<int>v;


void sive(){
    priems.set();
    priems[0]=priems[1]=0;
    int lim=sqrt(N+.5);
    for(int i=2; i<=lim; i++){
        if(priems[i]){
            for(int j=i*i; j<N; j+=i){
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
    for(auto u:v){
        if(u*u>n) break;
        if(n%u==0){
            return false;
        }
    }
    return true;
}
int next_p(int n){
    n++;
    while(!density(n)){
        n++;

    }
    return n;
}

int32_t main(){
    sive();
    int n;
    cin>>n; 
    while(n--){
        int n;
        cin>>n;
        cout<<next_p(n)<<"\n";
        
    }
}