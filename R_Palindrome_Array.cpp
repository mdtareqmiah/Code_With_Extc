#include<bits/stdc++.h>
using namespace std;


void funcs(int n){
    vector<int>v(n);
    for(auto &u:v) cin>>u;
    vector<int>v1(n);
    bool flag = true;
    v1=v;
    //sort(v1.rbegin(), v1.rend());
    
    int  x =n-1;
    for(int i=0; i<n; i++){
        if (v[i]!=v1[x]){
            flag=false;
            break;
        }
        x--;
    }
    if(flag){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}


int main(){
    int n;
    cin>>n;
    funcs(n);
    return 0;
}
