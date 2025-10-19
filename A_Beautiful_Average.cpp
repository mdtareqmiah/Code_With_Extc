#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int &u:v) cin>>u;
        int mx=INT_MIN;
        for(int i=0; i<n; i++){
            if(mx<v[i]) mx=v[i];
        }
        cout<<mx<<"\n";
    }
    return 0;
}