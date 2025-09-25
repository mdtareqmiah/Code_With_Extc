#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    vector<int>v1;
    int pos=1, neg=0;
    for(int i=0; i<n; i++){
        if(v[i]==pos){
            v1.push_back(2000+i+1);
            pos++;
        }
    }
    int sz=v1.size();
    if(sz==0){
        cout<<0<<"\n";
    }
    else{
        cout<<sz<<"\n";
        for(int i=0; i<sz; i++){
            cout<<v1[i]<<" ";
        }
    }
    return 0;
}