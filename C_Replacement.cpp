#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(auto &u:arr) cin>>u;
    for(int i=0; i<n; i++){
        if(arr[i]>0){
            arr[i]=1;
        }
        else{
            if(arr[i]==0){
                arr[i]=0;
            }
            else{
                arr[i]=2;
            }
        }
    }
    for(auto u:arr) cout<<u<<" ";
    cout<<"\n";

    return 0;
}