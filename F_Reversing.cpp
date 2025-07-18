#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int &u:arr) cin>>u;
    //reverse(arr+0,arr+n);
    //how can you do this with out build in function
    int arr1[n];
    for(int i=0; i<n; i++){
        arr1[i]=arr[n-1-i];
    }
    for(int u:arr1) cout<<u<<" ";

    return 0;
}