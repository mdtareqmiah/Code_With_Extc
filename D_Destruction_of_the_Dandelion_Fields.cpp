#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>v;
        ll p=0;
        for(int i=0; i<n; i++){
            ll a;
            cin>>a;
            if(a%2==0) p+=a;
            else v.push_back(a);
        }
        if(v.empty()){
            cout<<0<<"\n";
            continue;
        }
        sort(v.rbegin(),v.rend());
        ll res=0;
        
        int sz=(v.size()+1)/2;
        for(int i=0; i<sz; i++) res+=v[i];

        cout<<res+p<<"\n";

    }
    return 0;
}