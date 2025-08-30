#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int N=1e7+5;
bitset<N>priems;
vector<int>v;

void sive(){
    priems.set(); ///all aNre set true 1
    priems[0]=priems[1]=0;
    int lim=sqrt(N+.5);
    for(int i=2; i<=lim; i++){
        if(priems[i]){
            for(int j=i*i; j<N; j+=i){
                priems[j]=0;
            }
        }
        for(int i=2; i<N; i++){
            if(priems[i]){
                v.push_back(i);
            }
        }
    }

}

vector<pair<int ,int>>factorize(int n){
    vector<pair<int, int>>f;
    for(auto u : v){
        if(u*u>n) break;
        if(n%u==0){
            int ct=0;
            while(n%u==0){
                n/=u;
                ct++;
            }
            f.push_back({u,ct});
        }

    }
    if(n>1){
        f.push_back({n,1});
    }
    return f;
}

int sumofdiv(int n){
    auto f= factorize(n);
    int ans=1;
    for(auto [b,e] : f){
        int t=(pow(b,e+1)-1)/(b-1);
        ans*=t;
    }
    return ans;
}

int32_t main(){
    sive();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<sumofdiv(n)<<"\n";
    }
    return 0;
}