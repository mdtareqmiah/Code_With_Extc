#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n=7, sum=0;
        int arr[n];
        for(int &u:arr) cin>>u;
        for(int u:arr) sum+=u;
        cout<<sum<<' ';
    }

    return 0;
}