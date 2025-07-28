#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ul unsigned long long
#define endl '\n'

int solve(vector<int>v){
    // your code here
   int sz=v.size();
   for(int i=0; i<sz-1; i++){
    if(abs(v[i]-v[i+1])<=1){
        return 0;
    }
   }
   bool ac=1,dc=1;
   if(sz<=2){
    return -1;
   }
   for(int i=0; i<sz-1; i++){
    if(v[i]<v[i+1]){
        dc=0;

    }
    if(v[i]>v[i+1]){
        ac=0;
    }
   }
   if(ac || dc){
    return -1;
   }
   else{
    return 1;
   }
   
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>v(n);
        for(auto &u:v) cin>>u;
        
        cout<<solve(v)<<'\n';
    }
    return 0;
}