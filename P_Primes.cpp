#include <iostream>
#include <vector>
#include <bitset>
#include <cmath>
//#define int long long 
using namespace std;
const int N=10000007+5;
bitset<N>primes;

void sive(){
    primes.set();
    primes[0]=primes[1]=0;
    int lim=sqrt(N+0.5);
    for(int i=2; i<=lim; i++){
        if(primes[i]){
            for(int j=i*i; j<N; j+=i){
                primes[j]=0;
            }
        }
    }
}

int32_t main(){
    sive();
    int a,b;
    while(cin>>a>>b){
        int ct=0;
        if(a==-1 && b==-1) break;
        if(a<2) a=2;
        for(int i=a; i<=b; i++){
            if(primes[i]){
                ct++;
            }
        }
        cout<<ct<<"\n";
    }
    
    return 0;
}