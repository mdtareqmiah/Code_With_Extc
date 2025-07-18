#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int &u:arr) cin>>u;
    int low=arr[0];
    int l=1;
    for(int i=1; i<n; i++){
        if(arr[i]<low){
            low=arr[i];
            l=i+1;
        }
    }
    cout<<low<<" "<<l<<"\n";
    return 0;
}