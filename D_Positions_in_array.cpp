#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    int arr[t];
    for(int &u:arr) cin>>u;
    for(int i=0; i<t; i++) if(arr[i]<=10) cout<<"A["<<i<<"]"<<" = "<<arr[i]<<"\n"; else continue;
    cout<<"\n";
    return 0;
}