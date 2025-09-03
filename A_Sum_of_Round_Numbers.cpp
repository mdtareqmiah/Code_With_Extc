#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        int base=1;
        while(n>0){
            int x=n%10;
            if(base*x !=0) v.push_back(base*x);
            base*=10;
            n/=10;
        }
        cout<<v.size()<<"\n";
        for(auto u:v){
            cout<<u<<" ";
        }
        cout<<"\n";
    }
}