#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=8;
    int arr[n];
    for(int &u:arr) cin>>u;
    bool flag=true;
    for(int i=0; i<n-1; i++){
        if(((arr[i]%25!=0) || (arr[i]>arr[i+1])) || (arr[i]>676 || arr[i]<99)){
            flag=false;
            break;
        }
        
    }
    if(flag){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
    return 0;
}