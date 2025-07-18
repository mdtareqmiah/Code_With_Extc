#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int &u:arr) cin>>u;
    int base=arr[0];
    for(int i=1; i<n; i++){
        if(base<arr[i]){
            base=arr[i];
        }
        else{
            break;
        }
    }
    cout<<base<<"\n";
    return 0;
}