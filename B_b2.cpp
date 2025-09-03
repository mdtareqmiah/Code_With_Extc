#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &u:v) cin>>u;
    vector<int>even,odd;

    for(auto u:v){
        if(u%2==0){
            even.push_back(u);
        }
        else{
            odd.push_back(u);
        }
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    
    int e=even.size(), o=odd.size();
    if(e==o){
        cout<<0<<"\n";
        return 0;
    }
    int x=abs(e-o)-1;
    using ll=long long;
    ll res=0;
    
    if(e>o){
        for(int i=0; i<x; i++){
            res+=even[i];
        }
    }
    else{
        for(int i=0; i<x; i++){
            res+=odd[i];
        }
    }

    cout<<res<<"\n";
    
    return 0;
}