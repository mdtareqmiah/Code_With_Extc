#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int N=1e6+5;
bitset<N>priems;
vector<int>v;

void sive(){
    priems.set(); ///all aNre set true 1
    priems[0]=priems[1]=0;
    int lim=sqrt(N+.5);
    for(int i=2; i<=lim; i++){
        if(priems[i]){
            for(int j=i*i; j<=N; j+=i){
                priems[j]=0;
            }
        }
    }
    for(int i=2; i<N; i++){
        if(priems[i]){
            v.push_back(i);
        }
    }

}


int sofdiv(int n){
    int sod=1;
    int temp=n; 
    for(auto p:v){
        if(p*p>n) break;
        int cnt=0;
        while(n%p==0){
            cnt++;
            n/=p;
        }
        sod*=(pow(p,cnt+1)-1)/(p-1);

    }
    if(n>1) sod*=(pow(n,2)-1)/(n-1);
    return sod-temp;
}



int32_t main(){
    sive();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<sofdiv(n)<<"\n";
    }
    return 0;
}